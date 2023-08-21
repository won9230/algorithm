import sys
from collections import deque

n = sys.stdin.readline().rstrip()
notre = []
isNotre = False
tmp = []
ans = []

for i in range(len(n)-1,-1,-1):
    if n[i] == '>':
        if len(tmp) != 0:
            ans.append(tmp)
            tmp = []
        isNotre = True
    elif n[i] == '<':
        isNotre = False
            
    if isNotre:
        notre.append(n[i])
        continue
    else:
        if len(notre) != 0:
            notre.append(n[i])
            notre.reverse()
            ans.append(notre)
            notre = []
                           
    if n[i] == ' ':
        ans.append(tmp)
        ans.append([' '])
        tmp = []
    elif n[i] != '<':
        tmp.append(n[i])
        

ans.append(tmp)
ans.reverse()
# print(ans)
str = ''
for i in range(len(ans)):
    for j in range(len(ans[i])):
        str += ans[i][j]

    
print(str.lstrip())