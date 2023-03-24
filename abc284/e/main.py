import sys

from collections import defaultdict

sys.setrecursionlimit(10**7)
MAX=10**6
# 深さ優先探索
def dfs(ix):
    global C
    C += 1
    VIS[ix] = True
    if C >= MAX:
        print(MAX)
        exit()
    for i in D[ix]:
        if i in VIS and VIS[i]: continue
        dfs(i)
    VIS[ix] = False

C = 0
D = defaultdict(list)
VIS={}
N, M = map(int, input().split())
for i in range(M):
    u, v = map(int, input().split())
    D[u].append(v)
    D[v].append(u)
dfs(1)
print(C)
