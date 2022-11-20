n = int(input())
a = list(map(int,input().split()))
s = [0]*(2*n+1)

for i,j in enumerate(a):
  s[2*i+1] = a[j-1]+1
  s[2*i+2] = a[j-1]+1

print(*a,sep='\n')