def haeufigkeiten(str):
    dic = {}
    for x in str:
        dic[x] = str.count(x)
    return dic

print(haeufigkeiten("Erdbeere"))
