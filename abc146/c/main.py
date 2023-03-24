A, B, X = (map(int, input().split()))

def binary_search(n, k):
    left = 0
    right = n

    while left + 1 < right:
        mid = (left + right)//2

        if A * mid + B * len(str(mid)) <= k:
            left = mid
        else:
            right = mid
    return left

ma = 10 ** 9 + 1

print(binary_search(ma, X))