def isLeapYear(year):
    bool = False
    if (year % 4 == 0) and (year % 100 != 0) or (year % 400 == 0):
        bool = True
    else:
        bool = False
    return bool

def LeapYear(day, month, year):
    days = 0
    noLeapyear = [31,28,31,30,31,30,31,31,30,31,30,31]
    isLeapyear = [31,29,31,30,31,30,31,31,30,31,30,31]
    checkIfLeapYear = isLeapYear(year)
    if checkIfLeapYear == True:
        days += day
        for i in range(month-1):
            days += isLeapyear[i] 
        return days
    elif checkIfLeapYear == False:
        days += day
        for i in range(month-1):
            days += noLeapyear[i] 
        return days
    else:
        print("Something went wrong")
    return days

x,y,z = map(int, input("Bitte geben Sie ein Datum ein. ").split('.'))
print(LeapYear(x,y,z))