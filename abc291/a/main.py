s=input()
n=len(s)
ans=0

for i in range(n):
  if s[i].isupper():
    ans = i+1
print(ans)