import math

a,b = map(int,input().split())

ans = a*b // math.gcd(a,b)

if ans > pow(10,18):
  print("Large")
else:
  print(ans)