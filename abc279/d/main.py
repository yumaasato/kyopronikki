import math
def f(n):
  return a/math.sqrt(n+1) + b*n


a,b=map(int,input().split())
l,r = 0,a/b

while(r - l > 10):
  n1 = (2*r+l)//3
  n2 = (r+2*l)//3
  if f(n1) > f(n2):
    l = n1
  else:
    r = n2

ans = f(l)

for i in range(l+1,r+1):
  ans = min(ans,f(i))

print(ans)


