def sum(s):
  return s*(s+1)//2

def calc(k):
  res = 0
  while k:
    res += 1
    k //= 10
  return res


n=int(input())
mod = 998244353
ans = 0
for i in range(calc(n)):
  num = min(n,10**(i+1)-1) - (10**i-1)
  ans += sum(num)
print(ans%mod)


