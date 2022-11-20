from collections import deque

n=int(input())
s=input()
d=deque((n,))

for i in reversed(range(n)):
  if s[i] == 'L':
    d.append(i)
  else:
    d.appendleft(i)
print(*d)