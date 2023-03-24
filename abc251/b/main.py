n,w=map(int,input().split())
a=list(map(int,input().split())) + [0,0]
seen=set()

for i in range(n+2):
  for j in range(i):
    for k in range(j):
      sum = a[i]+a[j]+a[k]
      if sum in seen:
        continue
      seen.add(sum)
print(len(seen))
