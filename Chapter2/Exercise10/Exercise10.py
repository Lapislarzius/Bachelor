def ceaser_encode(src, dist):
    x = []
    for i in range(len(src)):
        y = ord(src[i])+dist%26
        code = ord(src[i])
        oa = ord('A')
        oz = ord('Z')

        if (code >= oa) and (code <= oz):
            y = (code - oa + dist) % 26
            x.append(chr(y+oa))

        oa = ord('a')
        oz = ord('z')
        if (code >= oa) and (code <= oz):
            y = (code - oa + dist) % 26
            x.append(chr(y+oa))
    print(''.join(x))

def ceaser_decode(src, dist):
    return ceaser_encode(src, -dist)

ceaser_encode('ZabcAZ',100)
ceaser_decode('AbcdBA',1)
