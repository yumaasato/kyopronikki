n=int(input())
a=list(map(int,input().split()))
b=[0,360]

curr=0
for x in a:
  curr += x
  curr %= 360
  b.append(curr)
b.sort()

c=[b[i+1]-b[i] for i in range(len(b)-1)]
print(max(c))