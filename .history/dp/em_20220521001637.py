def DP_match(A,B,c):
  m = len(A)
  n = len(B)
  dp = [[0 for i in range(n + 1)] for j in range(m+1)]
  for i in range(len(S)):
    for j in range(len(T)):
      dp[i+1][j+1] = 