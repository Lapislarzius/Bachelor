damen = set(['Dame1', 'Dame2','Dame3','Dame4'])
herren = set(['Herren1','Herren2','Herren3','Herren4'])
tanzlehrer = set(['Tanzlehrer'])

paare = set(tuple((d, h))
            for d in damen | tanzlehrer
            for h in herren | tanzlehrer
            if d != h)

for p in paare:
    print(p, end='\n')