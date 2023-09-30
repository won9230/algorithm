n = int(input())
dp = [0] * (n + 1)
dp[0] = 1
dp[1] = 2
for i in range(2,n +1):
    dp[i] = dp[i - 2] + dp[i - 1]
print(dp[-2] % 10007)