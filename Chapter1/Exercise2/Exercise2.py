while(True):
    x = input("Please choose the conversion unit! F/C")
    x = x.upper()
    if ((x != 'F') and (x != 'C')):
        print("Invalid input")
        continue
    try:
        t = float(input("Enter temperatur"))
    except ValueError:
        print("Invalid input")
        continue
    if(x == 'F'):
        f = (9 * t) / 5  + 32
        print("{0:.2f}F equals {1:.2f}C".format(t,f))
    if(x == 'C'):
        c = (5 * t - 32) / 9
        print("{0:.2f}F equals {1:.2f}C".format(t,c))
    q = input("Press q to exit anything else to continue")
    if(q == 'q'):
        break

