import math

def umfangKreis(radius):
    return 2 * math.pi * radius

def flaecheKreis(radius):
    return math.pi *radius**2

def summeUmfangKreis(radiusliste):
    umfList = []
    for u in radiusliste:
        umfList.append(round(umfangKreis(u),3))
    return umfList

def summeFlaecheKreis(radiusliste):
    flaeList = []
    for f in radiusliste:
        flaeList.append(round(flaecheKreis(f),3))
    return flaeList

radius = 3.5
radiusListe = [2.7, 4.6, 2.22, 7.1]

print("Umfang: {0:.3f}".format(umfangKreis(radius)))
print("Flaeche: {0:.3f}".format(flaecheKreis(radius)))
print("Summe Umfang: {}".format(summeUmfangKreis(radiusListe)))
print("Summe Flaeche: {}".format(summeFlaecheKreis(radiusListe)))