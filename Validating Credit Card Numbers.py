def splitleng(spleng):
    leng=0
    for i in spleng:
        x=len(i)
        if x==4:
            leng+=1
    if leng==4:
        return True
    else:
        return False

def conschk(spleng):
    newnum=''.join(spleng)
    k=4
    nchk=0
    for i in range(len(newnum)-k+1): 
        if (newnum[i]==newnum[i+1]==newnum[i+2]==newnum[i+3]):
            pass
        else:
            nchk+=1
    if (nchk==13 or nchk==16):
        return True
    else:
        return False
    
    
cases = int(input())
chk=0
for i in range (0,cases):
    num = input()
    
    #starting with 4,5,6
    if (num.startswith('4') or num.startswith('5') or num.startswith('6')):
        chk+=1
        
    #length=16 and sperated by -
    cnumleng = len(num)
    spleng = num.split("-")
    if (cnumleng==19):
        splitlength = splitleng(spleng)
        if (splitlength):
            chk+=1
    elif (cnumleng==16):
        chk+=1
    
    #consecutive numbers
    cons = conschk(spleng)
    if (cons):
        chk+=1
        
    if (chk==3):
        print("Valid")
        chk=0
    else:
        print("Invalid")
        chk=0
