n,x=map(int,input().split())
s=input()

for j in range(n):
  if s[j] == 'U':
    x //= 2
  elif s[j] == 'L':
    x = x*2
  else:
    x = x*2+1
print(x)