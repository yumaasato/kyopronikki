def DP_match(A,B,c):
  m = len(A)
  n = len(B)
  dp = [[0 for i in range(n + 1)] for j in range(m+1)]
  for i in range(len(A)):
    for j in range(len(B)):
      dp[i+1][j+1] = max(dp[i][j], dp[i+1][j])