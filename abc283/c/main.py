S=input()
flag=False
ans=len(S)
for s in S:
  if s == "0":
    if flag:
      ans-=1
      flag = False
    else:
      flag = True
  else:
    flag=False

print(ans)