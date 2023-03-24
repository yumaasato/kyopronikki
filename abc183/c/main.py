import itertools
n,k=map(int,input().split())
t = [list(map(int,input().split())) for _ in range(n)] # n*nの配列を生成

num = list(range(1,n))
ans = 0

for index in itertools.permutations(num): #1→n-1までの順列を生成
    index = [0]+list(index)+[0]
    ti = 0
    for i in range(n):
        ti += t[index[i]][index[i+1]]
    if ti == k:
        ans += 1
print(ans)
