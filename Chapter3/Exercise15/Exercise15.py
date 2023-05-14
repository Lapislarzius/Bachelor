def entfernenHTML(source, destination):
    inputFile = open(source, "r")
    outputFile = open(destination, "w")
    iFile = inputFile.read()
    tocopy = True
       
    for c in iFile:
        if tocopy == True:
            outputFile.write(c)

        if c == '<':
            tocopy = False
        elif c == '>':
            outputFile.write(c)
            tocopy = True
       

entfernenHTML("S:\Coding\Chapter3\Exercise15\HTMLPage1.html","S:\Coding\Chapter3\Exercise15\HTMLPage2.html")