s = input()
ans = -1
n = s.size()
for i in range(n):
  if s[i] == 'a':
    ans = i+1
print(ans)
