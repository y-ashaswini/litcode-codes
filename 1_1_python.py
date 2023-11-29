import sys
def doSomething(inval):
    u = 0
    l = 0
    d = 0
    o = 0
    for i in inval:
        if(i.isalpha()):
            if(i.isupper()):
                u+=1
            elif(i.islower()):
                l+=1
        elif(i.isnumeric()):
            d+=1
        else:
            o+=1
    tot = u+l+d+o
    print(str(round(u/tot*100, 3))+'%')
    print(str(round(l/tot*100, 3))+'%')
    print(str(round(d/tot*100, 3))+'%')
    print(str(round(o/tot*100, 3))+'%')
    return ""
inputVal = input()    
doSomething(inputVal)
