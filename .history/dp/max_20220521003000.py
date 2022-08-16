
n = int(input())
a = list(map(int, input().split()))
dp = [0] * (n + 1)
dp[0] = 0

for i in range(n):
  dp[i+1] = max(dp[i], dp[i] + a[i])
print(dp[n])



