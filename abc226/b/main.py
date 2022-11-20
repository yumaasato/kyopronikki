N = int(input())
S = set()

for _ in range(N):
    l, *A = map(int, input().split())  # lはどうでもいいです
    A = tuple(A)  # タプルにしないと、setに追加できません
    S.add(A)

print(len(S))