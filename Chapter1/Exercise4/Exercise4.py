p0 = (-1.1, 3.5)
p1 = (2.4, -0.7)
m = (p1[1]-p0[1])/(p1[0]-p0[0])
c = p0[1] - m * p0[0]
print("Fuer die Gerade y = mx + c durch P1 und P2 gilt:m= {0:.3f} und c = {1:.3f}".format(m,c))