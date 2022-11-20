from itertools import permutations

def judge():
  def is_same_shape(p):
    for i in range(n):
      for j in range(n):
        if ab[p[i]][p[j]] != cd[i][j]: return False
    return True

  n,m = map(int,input().split())
  ab = [[False]*n for _ in range(n)]
  cd = [[False]*n for _ in range(n)]

  for _ in range(m):
    a,b = map(int,input().split())
    a,b = a-1,b-1
    ab[a][b] = True
    ab[b][a] = True

  for _ in range(m):
    c,d = map(int,input().split())
    c,d = c-1,d-1
    cd[c][d] = True
    cd[d][c] = True

  for perm in permutations(range(n)):
    if is_same_shape(perm):
      return True
  return False

print("Yes" if judge() else "No")


