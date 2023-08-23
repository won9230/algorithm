import sys
n = int(input())
a = [sorted(list(map(int, sys.stdin.readline().split(" ")))) for _ in range(n)]
a.sort()

dp = [1 for _ in range(n)]

for i in range(n):
    for j in range(i):
        if a[i][1] >= a[j][1]:
            dp[i] = max(dp[i],dp[j] + 1)
            
print(max(dp))