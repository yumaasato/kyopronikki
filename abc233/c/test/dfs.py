import sys
sys.setrecursionlimit(10**6)

N,X=map(int,input().split())

L=[]
a=[]

for i in range(N):
    tmp=list(map(int,input().split()))
    L.append(tmp[0])
    a.append(tmp[1:])

ans=0

def DFS(pro,i):
    global ans
    if i==N:
        if pro==X:
            ans+=1
        return
    for j in range(L[i]):
        DFS(pro*a[i][j],i+1)

DFS(1,0)
print(ans)