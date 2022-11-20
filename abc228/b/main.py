n,x = map(int,input().split())
a = [-1] + list(map(int,input().split()))
f = [False] * (n+1)

f[x] = True
index = x
while not f[a[index]]:
  index = a[index]
  f[index] = True
print(f.count(True))




