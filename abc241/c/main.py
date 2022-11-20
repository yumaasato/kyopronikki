N=int(input())

grid=[]
for i in range(N):
  S=input()
  S=list(S)
  grid.append(S)

def SearchRight(gyou,retu):
  count=0
  for i in range(6):
      if grid[gyou][retu+i]=="#":
          count+=1
  return count

def SearchDown(gyou,retu):
  count=0
  for i in range(6):
      if grid[gyou+i][retu]=="#":
          count+=1
  return count

def SearchRightDown(gyou,retu):
  count=0
  for i in range(6):
    if grid[gyou+i][retu+i]=="#":
        count+=1
  return count

def SearchLeftDown(gyou,retu):
  count=0
  for i in range(6):
    if grid[gyou+i][retu-i]=="#":
        count+=1
  return count

for gyou in range(N):
    for retu in range(N):
      if retu+5<N:
          if 4<=SearchRight(gyou, retu):
              print("Yes")
              exit()

      if gyou+5<N:
          if 4<=SearchDown(gyou, retu):
              print("Yes")
              exit()

      if retu+5<N and gyou+5<N:
          if 4<=SearchRightDown(gyou, retu):
              print("Yes")
              exit()

      if gyou+5<N and 0<=retu-5:
          if 4<=SearchLeftDown(gyou, retu):
              print("Yes")
              exit()
print("No")
