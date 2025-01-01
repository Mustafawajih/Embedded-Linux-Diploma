
#Write a Python program which accepts the radius of a circle from the user and compute the area
from math import pi

r = float(input("Enter the radius: "))
Area = pi * (r ** 2)
print("the area is: %.2f" %Area)


