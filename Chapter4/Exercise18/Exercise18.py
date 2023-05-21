class SVektor:
    def __init__(self):
        self.__vec = {}
    
    def __getitem__(self, index):
        try:
            v = self.__vec[index]
        except:
            return 0.0
        else:
            return v

    def __setitem__(self, index, value):
        self.__vec[index] = float(value)

s = SVektor()

s[17] = 3.14
s[34] = 6.28
s[1234] = 0.001
#s[47]=(1.1, 1.2)


print("Wert[", 17, "] = ", s[17])
print("Wert[", 34, "] = ", s[34])
print("Wert[", 35, "] = ", s[35])      
        
for i in range(10, 36) :
    print("Wert[", i, "] = ", s[i], end = ", ")  