n=int(input())
a=[int(input()) for _ in range(n)]

d = {v:i for i, v in enumerate(sorted(set(a)))}

for i in a:
  print(d[i])