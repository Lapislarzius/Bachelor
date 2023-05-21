class Kunde:
    __anzahl = 0

    def __init__(self, nr = 0, name = ""):
        self.__nummer = nr
        self.__name = name
        Kunde.__anzahl += 1

    def __del__(self) :
        Kunde.__anzahl -= 1

    def getNummer(self):
        return self.__nummer   

    def getName(self) :
        return self.__name

    @staticmethod
    def getAnzahl():
        return Kunde.__anzahl

    def __str__(self) :
        beschr = str(self.__nummer) + ": " + self.__name
        return beschr

misterx = Kunde(42, "Knut Wuchtig")
print(misterx)
print(Kunde.getAnzahl(), " Objekte")

mistery = Kunde(4711, "Xaver Unsinn")
print(mistery)
print(Kunde.getAnzahl(), " Objekte")

print("Loesche Mr. Wuchtig")
del misterx  
print(Kunde.getAnzahl(), " Objekte")

print("Loesche Mr. Unsinn")
del mistery  
print(Kunde.getAnzahl(), " Objekte")