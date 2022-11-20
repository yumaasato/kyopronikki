import math

def distance_point(x1, y1, x2, y2):
    d = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    return d

T = int(input())
L, X, Y = map(int,input().split())
Q = int(input())

for q in range(Q):
    e = int(input())
    radi = math.radians((360/T)*e-90)
    y = - L/2 * math.cos(radi)
    z = L/2 + L/2 * math.sin(radi)

    d = distance_point(0, y, X, Y)
    print(math.degrees(math.atan2(z, d)))