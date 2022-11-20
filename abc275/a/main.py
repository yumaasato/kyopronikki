n = int(input())
h = list(map(int,input().split()))

hmax=max(h)

print(h.index(max(h))+1)