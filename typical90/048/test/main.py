n,k=map(int,input().split())
s = []
sum = 0
for i in range(n):
  a,b=map(int,input().split())
  s.append(b)
  s.append(a-b)

t = sorted(s,reverse=True)

for j in range(k):
  sum += t[j]
print(sum)