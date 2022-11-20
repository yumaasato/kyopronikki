x1,y1,x2,y2 = map(int,input().split())

f = False
for i in range(x1-2, x1+3):
  for j in range(y1-2, y1+3):
    a = (i - x1)**2 + (j-y1)**2
    b = (i - x2)**2 + (j-y2)**2
    if a == 5 and b == 5:
      f = True

if f: print("Yes")
else: print("No")