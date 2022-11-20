n,m=map(int,input().split())
a=list(map(int,input().split()))
a.sort()

start = 0
for i in range(1,n):
  if a[i] - a[i+1] > 1:
    start = i

allsum = sum(a)
ans = allsum
tmp = 0
for i in range(n):
  now = (start+i)%n
  if (a[now] - a[(now-1)%n]) % m > 1:
    ans = min(ans, allsum -tmp)
    tmp = 0
  tmp += a[now]

ans = min(ans,allsum-tmp)
print(ans)