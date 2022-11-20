from functools import lru_cache

@lru_cache(maxsize=None)
def s(n):
  if n == 1:
    return [1]
  else:
    return s(n-1) + [n] + s(n-1)

n = int(input())
print(*s(n))