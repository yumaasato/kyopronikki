def main():
  def solve(x):
    rem = N
    for t in range(10** 8):
      if C[x][t % 10] > 0:
          C[x][t % 10] -= 1
          rem -= 1
      if rem == 0