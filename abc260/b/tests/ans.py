# 入力の受け取り
N,X,Y,Z=map(int,input().split())
A=list(map(int,input().split()))
B=list(map(int,input().split()))

# 合格者のリスト
ans=[]

# 数学の点数と受験番号リスト
MathP=[]

# i=0~(N-1)
for i in range(N):
    # 「数学の点数」,「受験番号のマイナス」を記録
    MathP.append([A[i],-(i+1)])
# 大きい順にソート
MathP.sort(reverse=True)

# リストの前からX人合格
# i=0~(X-1)
for i in range(X):
    # 答えに合格者の番号を格納
    ans.append(-MathP[i][1])

# 英語の点数と受験番号リスト
EngP=[]

# i=0~(N-1)
for i in range(N):
    # 合格者のリストに番号がなければ
    if (i+1) not in ans:
        # 「英語の点数」,「受験番号のマイナス」を記録
        EngP.append([B[i],-(i+1)])
# 大きい順にソート
EngP.sort(reverse=True)

# リストの前からY人合格
# i=0~(Y-1)
for i in range(Y):
    # 答えに合格者の番号を格納
    ans.append(-EngP[i][1])

# 数学と英語の合計点数と受験番号リスト
MEP=[]

# i=0~(N-1)
for i in range(N):
    # 合格者のリストに番号がなければ
    if (i+1) not in ans:
        # 「数学と英語の合計点数」,「受験番号のマイナス」を記録
        MEP.append([A[i]+B[i],-(i+1)])
# 大きい順にソート
MEP.sort(reverse=True)

# リストの前からZ人合格
# i=0~(Z-1)
for i in range(Z):
    # 答えに合格者の番号を格納
    ans.append(-MEP[i][1])

# 答えのリストをソート
ans.sort()

# x：ansの各要素
for x in ans:
    # xを出力
    print(x)