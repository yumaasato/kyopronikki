from collections import deque

def BFS(H1,W1,H2,W2):
    if 0<=H1<H and 0<=H2<H and 0<=W1<W and 0<=W2<W:
        if Grid[H1][W1]=="." and Grid[H2][W2]==".":
            que=deque()
            Visited=[[0]*W for i in range(H)]
            Visited[H1][W1]=1
            Visited[H2][W2]=1
            que.append((H2,W2))

            while que:
                NowH,NowW=que.popleft()
                # 上
                if 0<=NowH-1<H and 0<=NowW<W and (Grid[NowH-1][NowW]=="." or Grid[NowH-1][NowW]=="S")and Visited[NowH-1][NowW]==0:
                    que.append((NowH-1,NowW))
                    Visited[NowH-1][NowW]=1
                # 下
                if 0<=NowH+1<H and 0<=NowW<W and (Grid[NowH+1][NowW]=="." or Grid[NowH+1][NowW]=="S") and Visited[NowH+1][NowW]==0:
                    que.append((NowH+1,NowW))
                    Visited[NowH+1][NowW]=1
                # 左
                if 0<=NowH<H and 0<=NowW-1<W and (Grid[NowH][NowW-1]=="." or Grid[NowH][NowW-1]=="S")and Visited[NowH][NowW-1]==0:
                    que.append((NowH,NowW-1))
                    Visited[NowH][NowW-1]=1
                # 右
                if 0<=NowH<H and 0<=NowW+1<W and (Grid[NowH][NowW+1]=="." or Grid[NowH][NowW+1]=="S")and Visited[NowH][NowW+1]==0:
                    que.append((NowH,NowW+1))
                    Visited[NowH][NowW+1]=1

            if Visited[Sh][Sw]==1:
                print("Yes")
                exit()

H,W=map(int,input().split())
Grid=[]

for i in range(H):
    S=input()
    Grid.append(list(S))

for h in range(H):
    for w in range(W):
        if Grid[h][w]=="S":
            Sh,Sw=h,w

# 1回目：上→2回目：上
BFS(Sh-1,Sw,Sh-1-1,Sw)
# 1回目：上→2回目：左
BFS(Sh-1,Sw,Sh-1,Sw-1)
# 1回目：上→2回目：右
BFS(Sh-1,Sw,Sh-1,Sw+1)

# 1回目：下→2回目：下
BFS(Sh+1,Sw,Sh+1+1,Sw)
# 1回目：下→2回目：左
BFS(Sh+1,Sw,Sh+1,Sw-1)
# 1回目：下→2回目：右
BFS(Sh+1,Sw,Sh+1,Sw+1)

# 1回目：左→2回目：左
BFS(Sh,Sw-1,Sh,Sw-1-1)
# 1回目：左→2回目：上
BFS(Sh,Sw-1,Sh-1,Sw-1)
# 1回目：左→2回目：下
BFS(Sh,Sw-1,Sh+1,Sw-1)

# 1回目：右→2回目：右
BFS(Sh,Sw+1,Sh,Sw+1+1)
# 1回目：右→2回目：上
BFS(Sh,Sw+1,Sh+1,Sw+1)
# 1回目：右→2回目：下
BFS(Sh,Sw+1,Sh-1,Sw+1)

# 「No」を出力
print("No")