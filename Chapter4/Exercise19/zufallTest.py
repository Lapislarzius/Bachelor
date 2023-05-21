import zufall

rng = zufall.PRNG()

for _ in range(10):
    print (rng.rand(), end=", ")

print("\n")    

for _ in range(10):
    print (rng.randDouble(), end=", ")
    