import sys

def Question(num, k):
    # 9*n + 10(some sum, say m) = num
    # max value of m is going to be num/10
    rhs = num//10
    max_len=-1
    for m in range(1, rhs+1):
        n = (num - 10*m)/9
        if(n == int(n)):
            # n is a whole number, can be considered
            max_len = max(max_len, int(n))
    return max_len
    
num = int(input())
k = int(input())
print(Question(num, k))
