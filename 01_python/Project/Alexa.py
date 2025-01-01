from gtts import gTTS
import os
import speech_recognition as sr
import random
import threading
import webbrowser
import datetime
import pygame
import sys
import pywhatkit
import wikipedia
from plyer import notification
import schedule
import time

preReponses = ['السلامه عليكم','مساء الخير ','صباح الخير']
i = random.randint(0,2)
intro = preReponses[i]

class VoiseAssistant:

    def __init__(self):
        self.recognizer = sr.Recognizer()

    def record_audio(self):
        with sr.Microphone() as source:
            print("انا فى الاستماع ")
            self.recognizer.adjust_for_ambient_noise(source)           
            audio = self.recognizer.listen(source)
        return audio
    
    def recognize_speech(self, audio):
        try:
            text = self.recognizer.recognize_google(audio, language="ar-EG")
            print(f"انت قولت: {text}")
            return text
        except sr.UnknownValueError:
            print("لم استطع فهم طلبك")
        return ""

    def speak(self, audios):
        tts = gTTS(text=audios, lang='ar', slow=False)
        filename = "voice.mp3"
        tts.save(filename)

        pygame.mixer.init()
        pygame.mixer.music.load(filename)
        pygame.mixer.music.play()

        while pygame.mixer.music.get_busy():
            pygame.time.Clock().tick(10)

        pygame.mixer.quit()
        os.remove(filename)
        

def get_time():
    current_time = datetime.datetime.now().strftime("%H:%M:%S")
    return current_time

def get_date():
    current_date = datetime.datetime.now().strftime("%d/%m/%Y")
    return current_date

def whoIam():
    info = "You Are Mustafa an Embedded Systems Engineer"
    return info

def search_words_in_string(word_list,text):
    found_words = [word for word in word_list if word in text]
    return len(found_words)!=0

def respond(voice_data):
    if search_words_in_string(["انا مين","مين"],voice_data):
        alexa.speak(""+whoIam())
    if search_words_in_string(["كيف حالك"],voice_data):
        alexa.speak('بخير الحمدالله')
    if search_words_in_string(["الساعه","ساعه","وقت","الساعه كم"],voice_data):
        alexa.speak("الساعه الان هى " +get_time())
    if search_words_in_string(["التاريخ","تاريخ","النهارده","التاريخ كم"],voice_data):
        alexa.speak("التاريخ الان هو " +get_date())

    if search_words_in_string(["google","جوجل"],voice_data):
        webbrowser.open("https://www.google.com")
    if search_words_in_string(["youtube","يوتيوب"],voice_data):
        webbrowser.open("https://www.youtube.com/")
    if search_words_in_string(["linkedin","لينكد ان"],voice_data):
        webbrowser.open("https://www.linkedin.com/feed/")
    if search_words_in_string(["github"," جيت هاب"],voice_data):
        webbrowser.open("https://github.com/Mustafawajih")
    if search_words_in_string(["chatgpt","شات جي بي تي"],voice_data):
        webbrowser.open("https://chatgpt.com/")

    if search_words_in_string(["code","كود","الكود"],voice_data):
        os.system("code &")
    if search_words_in_string(["اغنيه","موسيقى","سوره","صوره"],voice_data):
        pywhatkit.playonyt(voice_data)
    if search_words_in_string(["كلمينى عن","من هو"],voice_data):
        wikipedia.set_lang("ar")
        info = wikipedia.summary(voice_data,1)
        alexa.speak(info)
    if search_words_in_string(["سلام","باى","سلامه"],voice_data):
        alexa.speak("مع السلامه")
        sys.exit()


def send_notification():
        notification.notify(
            title="تنبيه",
            message="صلى على النبى",
            timeout=60
        )

def schedule_notifications():
        while True:
            schedule.run_pending()
            time.sleep(10)

schedule.every(60).seconds.do(send_notification)
threading.Thread(target=schedule_notifications).start()


if __name__ == "__main__":

    alexa=VoiseAssistant()
    alexa.speak(intro + "")
    while True:
        audio = alexa.record_audio()
        voice_data = alexa.recognize_speech(audio)
        print(voice_data.lower())
        respond(str(voice_data))
