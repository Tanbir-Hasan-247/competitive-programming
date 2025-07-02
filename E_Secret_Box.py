import math

def count_positions(x, y, z, k):
    count = 0
    for i in range(1, min(x, k) + 1):
        if k % i == 0:
            for j in range(1, min(y, k // i) + 1):
                if (k // i) % j == 0 and (k // i) // j <= z:
                    count += 1
    return count

t = int(input())

for _ in range(t):
    x, y, z, k = map(int, input().split())
    print(count_positions(x, y, z, k))
