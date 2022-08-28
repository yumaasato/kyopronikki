from bisect import bisect_left

INF = 2**60

N = int(input())
A = list(map(int, input().split()))

A.sort()

Q = int(input())
for _ in range(Q):
  B = int(input())
  # A[j] >= Bとなる最小のjを求める
  j = bisect_left(A,B)

  # A[j]とA[j-1]を比較する
  res = INF
  if j < N:
    res = min(res, abs(B-A[j]))
  if j > 0:
    res = min(res,abs(B-A[j-1]))

  print(res)
