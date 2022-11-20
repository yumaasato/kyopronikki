s=input()
n=len(s)
l=[]

for _ in range(n):
  l.append(s)
  s = s[1:] + s[0]
l.sort()

print(l[0])
print(l[-1])