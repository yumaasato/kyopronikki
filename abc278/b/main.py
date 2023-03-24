def time(h,m):
  return 0 <= h <= 23 and 0 <= m <= 59

def judge(h,m):
  a,b=h//10,h%10
  c,d=m//10,m%10
  ac = a*10+c
  bd = b*10+d
  return time(ac,bd)

h,m=map(int,input().split())
while not judge(h,m):
  m += 1
  if m == 60:
    h,m=h+1,0
  if h == 24:
    h = 0
print(h,m)