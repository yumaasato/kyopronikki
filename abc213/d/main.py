import sys
sys.setrecursionlimit(300000)

n=int(input())
g = [[] for i in range(n+1)]
for i in range(n-1):
  a,b=map(int,input().split())
  g[a].append(b)
  g[b].append(a)

for i in range(n+1):g[i].sort

ans=[]
def dfs(crr,pre):
  ans.append(crr)
  for nxt in g[crr]:
    if nxt != pre:
      dfs(nxt,crr)
      ans.append(crr)

dfs(1,-1)
print(*ans)