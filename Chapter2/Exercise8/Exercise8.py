import random
loop = True
while loop == True:
    counter = 1
    z = random.randint(0,9)
    while loop == True:
        i = int(input('Bitte geben sie die geschaetzte Zahl ein\n'))
        if counter == 3:
            print("Gescuhte Zahl war {}".format(z))
            break
        elif i == z:
            print("Bingo!")
            x = input("Wollen sie weiter spielen?y/n\n")
            if x.lower() == 'y':
                break
            elif x.lower() == 'n':
                loop = False
                break
        elif i < z:
            print("Gesuchte Zahl ist groesser")
        elif i > z:
            print("Gesuchte Zahl ist kleiner")    
        counter +=1
