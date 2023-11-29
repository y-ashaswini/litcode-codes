import sys
def doSomething(inval):
    max_len = 1

    for left in range(len(inval)):
        if(left == len(inval)-1):
            return max_len
        
        unique = []
        unique.append(inval[left])
        right = left+1
        while(right < len(inval) and inval[right] not in unique):
            unique.append(inval[right])
            right +=1
        max_len = max(max_len, right-left)
    
    return max_len

s = input()    
outval = doSomething(s)
print (outval)
