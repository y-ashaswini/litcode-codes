def calc(inputarr, sublen, pos_smallest):
    sorted(inputarr)
    left = 0
    right = sublen
    outputarr = []
    while(right <= len(inputarr)):
        temparr = inputarr[left:right]
        outputarr.append(temparr[pos_smallest-1])
        
        left += 1
        right += 1
    
    return outputarr


inputarr = [int(i) for i in input().split(" ")]
sublen = int(input())
pos_smallest = int(input())
print(calc(inputarr, sublen, pos_smallest))
