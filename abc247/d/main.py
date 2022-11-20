q = int(input())

from collections import deque
que=deque()

for i in range(q):
  query=list(map(int,input().split()))

  if query[0]==1:
    x=query[1]
    c=query[2]

    que.append([x,c])

  else:
    c=query[1]
    ans = 0
    while 0<c:
      num,count=que.popleft()

      if count<=c:
        ans+=num*count
        c-=count
      else:
        ans+=num*c
        que.appendleft([num,count-c])
        c=0
    print(ans)