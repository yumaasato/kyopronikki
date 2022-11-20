from itertools import accumulate


def solve():
    N, P, Q, R = map(int, input().split())
    A = list(map(int, input().split()))
    A_acc = [0] + list(accumulate(A))  # itertools.accumulateで累積和の配列を作ります
    st = set(A_acc)
    for i in range(N + 1):
        p = P + A_acc[i]
        q = Q + P + A_acc[i]
        r = R + Q + P + A_acc[i]
        if p in st and q in st and r in st:  # {p, q, r} <= st でもいいです
            return True
    return False


print("Yes" if solve() else "No")