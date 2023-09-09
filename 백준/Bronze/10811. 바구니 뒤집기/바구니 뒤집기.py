import sys
n, m = map(int,input().split())
arr = []
for i in range(1, n+1):
    arr.append(i)
    
for _ in range(m):
    i, j = map(int,sys.stdin.readline().split())
    tmp = []
    for __ in range(i-1, j):
        tmp.append(arr[__])
    tmp.reverse()
    arr[i-1:j] = tmp

print(*arr)
