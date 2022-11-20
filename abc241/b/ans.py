from collections import Counter

def solve():
  n,m=map(int,input().split())
  a = Counter(map(int,input().split()))
  b = list(map(int,input().split()))
  for x in b:
    if a[x] == 0:
      return False
    a[x]-=1
  return True

print("Yes" if solve() else "No")