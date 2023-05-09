def weekday(day, month, splitYear):
    #2022
    year = splitYear % 100
    century = int((splitYear - year) / 100)
    
    weekdays = ["Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"]
    if (month == 1) or (month == 2):
        year -= 1
    elif (month == 1) or (month == 2) and (year == 0):
        year = 99

    w = (day + int((month + 1) * 26 / 10) + int(5 * year / 4) + int(century / 4) - 2 * century - 1) % 7

    print(weekdays[w])

x, y, z = map(int, input("Bitte geben Sie ein Datum ein! ").split('.'))
weekday(x,y,z)