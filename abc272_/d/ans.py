N,M=map(int,input().split())

def isqrt(n):
  ans=int(n**0.5-1)
  while (ans+1)**2<=n: ans+=1
  return ans

dxy=[]
for x in range(M+1):
  if x*x>M:break
  y=isqrt(M-x*x)
  if x*x+y*y==M:
    dxy.append((x,y))
    dxy.append((x,-y))
    dxy.append((-x,y))
    dxy.append((-x,-y))

dist=[[-1]*N for _ in range(N)]
dist[0][0]=0
que=[(0,0)]

for i,j in que:
  for dx,dy in dxy:
    if 0<=i+dx<N and 0<=j+dy<N and dist[i+dx][j+dy]==-1:
      dist[i+dx][j+dy]=dist[i][j]+1
      que.append((i+dx,j+dy))

for d in dist:print(*d)
