n=int(input())
seen=set()
max_t=-1

for i in range(1,n+1):
  s,t=input().split()
  nt = int(t)
  if s in seen:
    continue
  seen.add(s)
  if max_t < nt:
    max_t = nt
    ans = i
print(ans)