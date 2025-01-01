import webbrowser

FAVORITE_SITES = {

    "1":("Google","https://www.google.com"),
    "2":("YouTube","https://www.youtube.com/"),
    "3":("LinkedIn","https://www.linkedin.com/feed/"),
    "4":("GitHub", "https://github.com/Mustafawajih"),
    "5":("Gmail","https://mail.google.com/mail/u/0/#inbox"),
    "6":("Drive","https://drive.google.com/drive/home"),
    "7":("Chatgpt","https://chatgpt.com/")
}


def open_sites(URL):
    chrome_path = 'C:/Program Files/Google/Chrome/Application/chrome.exe %s'
    webbrowser.get(chrome_path).open(URL)



