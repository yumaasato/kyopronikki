def DP_match(A,B,c):
  m = len(A)
  n = len(B)
  dp = [[0 for i in range(n + 1)] for j in range(m+1)]
  