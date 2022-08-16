def main():
  def solve(x):
    rem = N # 止めていない残りリール数
    for t in range(10** 8): # 適当に巨大な数
      if C[x][t % 10] > 0:  # t % 10で止めるべきリールが残っているなら止める
          C[x][t % 10] -= 1
          rem -= 1
      if rem == 0:
        return t

  N = int(input())
  S = [input() for _ in range(N)]
  C = [[0] * 10 for _ in range(10)] # C[i][j]: 数字iがSのj番目に出てくる回数
  for i in range(N):
    for j in range(10):
      C[int(S[i][j])][j] += 1

  print(min(solve(i) for i in range(10)))

if __name__ == '__main__':
  main()