import sys
n = list(map(int, sys.stdin.readline().split()))
m = []

for i in range(len(n)):
    m += list(map(int,sys.stdin.readline().split()))
m.sort()
ans = ' '.join(map(str,m))
print(ans)