N = int(input())
a = [int(input()) for i in range()]
def max_sum(N,a):
  dp = [0] * (N + 1)
  for i in range(N):
    dp[i+1] = max(dp[i], dp[i] + a[i])
  return dp[N]