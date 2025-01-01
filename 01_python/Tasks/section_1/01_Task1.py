
#Write a Python program to count the number 4 in a given list.
mylist = [1,4,6,7,4]
x = mylist.count(4)
print(x)  # 2
#------------------------------

#Write a Python program to test whether a passed letter is a vowel or not.
def vowel(str):
    myvowel = ['a', 'e', 'i', 'o', 'u']

    if str in myvowel:
        print("is a vowel")
    else:
        print("is not vowel")

vowel('c')  #is not vowel
#------------------------------

#Write a python program to access environment variables.
import os 

print(os.environ)
path = os.environ['PATH']
print(path)




