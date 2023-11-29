def clumsy(n):
    
    #  10 x 9 / 8 + 7 - 6 x 5 / 4 + 3 - 2 x 1
    #   0   1   2   3   4   5   6   7   8   9
    # 90/8 + 7 - 30/4 + 3 - 2
    # 11 + 7 - 7 + 3 - 2
    # 18 - 10 - 2
    # 6
    
    l = [i for i in range(n, 0, -1)]
    # print(l)
    
    for i in range(0, n-1, 4):
        l[i] = l[i] * l[i+1]
        l[i+1] = -1
    temp = [i for i in l if i != -1]
    l = temp
    # print(l)
    
    for i in range(0, len(l)-1, 3):
        l[i] = l[i] // l[i+1]
        l[i+1] = -1
    temp = [i for i in l if i != -1]
    l = temp
    # print(l)
    
    for i in range(0, len(l)-1, 2):
        l[i] = l[i] + l[i+1]
        l[i+1] = -1
        
    temp = [i for i in l if i != -1]
    # print(temp)

    s = temp[0]
    
    for i in range(1, len(temp)):
        s-= temp[i]
    
    return s
        
    
n = int(input())
print(clumsy(n))
