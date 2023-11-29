import sys
def doSomething(num, mat):
    outval = 'YES'
    
    d = {'1': 0, '2': 0, '3': 0, '4': 0, '5': 0, '6': 0, '7': 0, '8': 0, '9': 0}
    # Check for each row
    temp_d = d
    for row in mat:
        for ele in row:
            if(ele == '.'):
                pass
            elif(ele>='1' and ele<='9' and temp_d[ele] == 0):
                temp_d[ele] = 1
            else:
                outval = 'NO'
                return(outval)
    
    # Each column
    temp_d = d
    for i in range(num):
        for j in range(num):
            ele = mat[j][i]
            if(ele == '.'):
                pass
            elif(ele >='1' and ele <='9' and temp_d[ele] == 0):
                temp_d[ele] = 1
            else:
                outval = 'NO'
                return(outval)
    
    # Each 3x3 box
    # 00, 01, 02
    # 10, 11, 12
    # 20, 21, 22
    temp_d = d
    for i in range(0, num, 3):
        for j in range(0, num, 3):
            
            for m in range(i, i+3):
                for n in range(j, j+3):
                    ele = mat[i][j]
                    if(ele == '.'):
                        pass
                    elif(ele>='1' and ele <='9' and temp_d[ele] == 0):
                        temp_d[ele] = 1
                    else:
                        outval = 'NO'
                        return(outval)
    
    return outval

num = int(input())
mat = []
for row in range(num):
    col = input().split(' ')
    mat.append(col)

outputVal = doSomething(num, mat)
print (outputVal)
