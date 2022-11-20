n,m=map(int,input().split())
a = sorted(list(map(int,input().split())))

ans,sum_,cnt=[],a[0],a[0]
for i in range(1,n):
  if a[i] == cnt or cnt + 1 == a[i]:
    sum_ += a[i]
    cnt = a[i]
  else:
    ans.append(sum_)
    sum_ = a[i]
    cnt = a[i]

if a[-1] == a[0] or (a[-1] == m-1 and a[0] == 0):
  if len(ans) == 0:
    ans.append(sum_)
  else:
    ans[0] += sum_

print(sum(a)- max(ans))