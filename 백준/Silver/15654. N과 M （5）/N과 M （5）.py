import sys
n,m = map(int,sys.stdin.readline().split())
s = list(map(int,sys.stdin.readline().split()))
s.sort()
tmp = []

def back(a):
    if a == m:
        print(" ".join(map(str,tmp)))
        return
    
    for i in range(n):
        if s[i] in tmp:
            continue
        tmp.append(s[i])
        back(a+1)
        tmp.pop()

back(0)