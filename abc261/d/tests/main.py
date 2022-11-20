n,m = map(int,input().split())

x=[0]+list(map(int,input().split()))
b=[0]*(n+1)

for i in range(m):
  c,y=map(int,input().split())
  b[c] = y
dp=[[0]*(n+1) for i in range(n+1)]

for i in range(i,n+1):
  for k in range(i+1):
    if k == 0:
      dp[i][k]=max(dp[i-1])
    else:
      dp[i][k]=dp[i-1][k-1]+x[i]+b[k]
print(max[dp[n]])