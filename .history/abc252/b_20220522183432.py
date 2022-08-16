def solve():
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    A_max = max(A)  #いし
    for b in B:
        if A[b - 1] == A_max:
            return True
    return False


print("Yes" if solve() else "No")