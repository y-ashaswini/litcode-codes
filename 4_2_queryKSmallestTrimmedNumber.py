inarr = input().split(" ")
outarr = []
n = int(input())
for i in range(n):
    q = [int(k) for k in input().split(" ")]
    # 2, 2
    temp_inarr = [int(g[len(g) - q[1] : ]) for g in inarr]
    # print(temp_inarr)
    temp_temp_inarr = sorted(temp_inarr)
    outarr.append(temp_inarr.index(temp_temp_inarr[q[0]-1]))

# print()
print(outarr)
