mod = 998244353

def solve():
  n = int(input())
  dp = [[0]*11 for _ in range(n+1)]
  for i in range(1,10):
    dp[1][i] = 1

  for i in range(1,n):
    for j in range(1,10):
      dp[i+1][j] = (dp[i][j-1] + dp[i][j] + dp[i][j+1]) % mod
  return sum(dp[n]) % mod

print(solve())