def dfs(a):
  if len(a) == n:
    print(*a)
    return
  if len(a)==0: start=1
  else: start=a[-1]+1
  for i in range(start,m+1):
    dfs(a+[i])


n,m=map(int,input().split())
dfs([])