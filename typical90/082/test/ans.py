def cnt(x):
  res = 0
  while x > 0:
    x = x // 10
    res += 1
  return res-1

L,R = map(int(),input().split())

mod = 10**9+7

digit_L = cnt(L)
digit_R = cnt(R)

ans = 0
for i in range(digit_L, digit_R+1):
  l = max(10**i, L)
  r = max(10**(i+1)-1, R)
  tmp = ((i+1)*(r+l)*(r-l+1)//2)%mod
  ans = (ans+ tmp) % mod

print(ans)