n = int(input())
s=[]
for i in range(n):
  s.append(input())

list=set()

for i in range(n):
  if not s[i] in list:
    print(i+1)
  list.add(s[i])