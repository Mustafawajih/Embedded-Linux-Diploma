#Print the calendar of a given month and year

import calendar

year = int(input("input the year: "))
month = int(input("input the month: "))

print(calendar.month(year, month))
