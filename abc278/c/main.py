import collections
n,q=list(map,input().split())
obj = collections.defaultdict(set)
qs = []
for _ in range(q):
  qs.append(list(map(int,input().split())))
for t,a,b in qs:
  if t == 1:
    obj[a].add(b)
  elif t == 2:
    obj[a].diccard(b)
  else:
    if a in obj[b] and b in obj[a]:
      print("Yes")
    else:
      print("No")
