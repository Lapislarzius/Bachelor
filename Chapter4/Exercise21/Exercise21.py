import sys
sys.path.append('C:/Users/guere/Coding/Bachelor/Chapter4/Exercise20')
from Exercise20 import Ding
class Quader(Ding):
    
    def __init__(self, symbol, laenge, breite, hoehe):
        Ding.__init__(self, symbol, laenge*breite*hoehe)
        self.__laenge = float(laenge)
        self.__breite = float(breite)
        self.__hoehe = float(hoehe)

    def __gt__(self, other): 
        return self.getMasse() > other.getMasse()

    def __ge__(self, other):
        return self.getMasse() >= other.getMasse()

    def __eq__(self, other):
        return self.getMasse() == other.getMasse()

    def __str__(self):
        text = 'Ein Quader aus '+ \
            self._dichte[self._symbol][0]+ ', ' + \
            format(self.__laenge, '.2f') + ' cm mal '+ \
            format(self.__breite, '.2f') + ' cm mal '+ \
            format(self.__hoehe ,'.2f') + ' cm'
        return text

# Hauptprogramm mit Anweisungen zum Testen der Klasse Quader
silberbarren = Quader('Ag', 2, 3, 4)
print('Masse: ',silberbarren.getMasse())
print('Volumen: ',silberbarren.getVolumen())
print(silberbarren)

eisen = Quader('Fe', 2, 3, 4)
print(eisen)
if silberbarren >= eisen:
    print("Barren ist schwerer.")
else:
    print("Eisen ist schwerer.")