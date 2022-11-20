def is_prime(n):
    """素数判定 O(√N)"""
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    i = 3
    while i * i <= n:
        if n % i == 0:
            return False
        i += 2
    return True


def main():
    def solve():
        def judge(x):
            for y in range(C, D + 1):
                if is_prime(x + y):
                    return False
            return True

        A, B, C, D = map(int, input().split())
        for x in range(A, B + 1):
            if judge(x):
                return True
        return False

    print("Takahashi" if solve() else "Aoki")


main()