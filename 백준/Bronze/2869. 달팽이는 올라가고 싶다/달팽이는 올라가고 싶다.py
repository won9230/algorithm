import math

n = input().split()

A = int(n[0])
B = int(n[1])
V = int(n[2])


x = V - A
z = x / (A-B)
c = z + 1

print(math.ceil(c))