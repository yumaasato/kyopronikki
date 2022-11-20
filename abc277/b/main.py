n=int(input())
s=[input() for _ in range(n)]
s1="HDCS"
s2="A23456789TJQK"

ans = True
for i in range(n):
  for j in range(i):
    if s[i] == s[j]:
      ans = False

for i in range(n):
  if not s1.count(s[i][0]) or not s2.count(s[i][1]):
    ans = False
print("Yes" if ans else "No")