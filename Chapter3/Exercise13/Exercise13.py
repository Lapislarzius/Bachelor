from math import pi

#1
x = ['ab', 'cd']
print(list(map(list, x)))

#2
floatList = [1.3, 2.4, 3.4]
filt = list(map(lambda x: x * 360 / 2 * pi,filter(lambda x: x >= 0 and x <= pi, floatList)))
for k in filt:
    print(k)

#3
z = list(map(lambda n:[i for i in range(3,n+1,3)], [13,7,2]))
print(z)
#[[3, 6, 9, 12], [3, 6], []]