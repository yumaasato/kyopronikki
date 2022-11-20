# DFSを使わない解法
import math
import itertools
n,x = map(int,input().split())
a=[list(map(int,input().split()))[1:] for _ in range(n)]
ans = 0
for v in itertools.product(*a):
  if math.prod(v) == x:
    ans += 1
print(ans)