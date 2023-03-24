n,m=map(int,input().split())
a=list(map(int,input().split()))
c=list(map(int,input().split()))
b = []

for i in reversed(range(0,m+1)):
  num = c[n+i]//a[n]
  b.append(num)
  for j in reversed(range(0,n+1)):
    c[i+j] -= num*a[j]

print(*(reversed(b)))