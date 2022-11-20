n = int(input())

one = []
for i in range(60):
  if n>>i&1:
    one.append(i)
l = len(one)

for i in range(1<<l):
  now = 0
  for j in range(l):
    if i>>j&1:
      now+=(1<<one[j])
  print(now)