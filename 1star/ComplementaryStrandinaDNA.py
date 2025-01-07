t = int(input())
for _ in range(t):
    s = int(input())
    dna = str(input())
    newDNA = ""
    for i in range(0,len(dna)):
        
        if(dna[i]=="A"):
            newDNA += "T"
        elif(dna[i]=="T"):
            newDNA += "A"
        elif(dna[i]=="C"):
            newDNA += "G"
        elif(dna[i]=="G"):
            newDNA += "C"
    print(newDNA)