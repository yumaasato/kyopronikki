h,w = map(int,input().split())
a=[list(input()) for _ in range(h)]

cnt=[0]*w
for i in range(h):
  for j in range(w):
    if a[i][j]=='#':
      cnt[j]+=1
print(*cnt,sep=' ')