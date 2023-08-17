import sys
from collections import deque

tmp = map(int,input().rstrip())
one = deque(tmp)
tmp = map(int,input().rstrip())
two = deque(tmp)
tmp = map(int,input().rstrip())
three = deque(tmp)
tmp = map(int,input().rstrip())
four = deque(tmp)

k = int(input())
rot = []

for i in range(k):
    rot.append(list(map(int,input().split())))

for ro in rot:
    if ro[0] == 1:
        if one[2] != two[6]:
            if two[2] != three[6]:
                if three[2] != four[6]:
                    four.rotate(ro[1] * -1)
                three.rotate(ro[1])
            two.rotate(ro[1] * -1)
        one.rotate(ro[1])
    elif ro[0] == 2:
        if two[6] != one[2]:
            one.rotate(ro[1] * -1)
        if two[2] != three[6]:
            if three[2] != four[6]:
                four.rotate(ro[1])
            three.rotate(ro[1] * -1)
        two.rotate(ro[1])
    elif ro[0] == 3:
        if three[6] != two[2]:
            if two[6] != one[2]:
                one.rotate(ro[1])
            two.rotate(ro[1] * -1)
        if three[2] != four[6]:
            four.rotate(ro[1] * -1)
        three.rotate(ro[1])
    elif ro[0] == 4:
        if four[6] != three[2]:
            if three[6] != two[2]:
                if two[6] != one[2]:
                    one.rotate(ro[1] * -1)
                two.rotate(ro[1])
            three.rotate(ro[1] * -1)
        four.rotate(ro[1])
    
ans = 0
if one[0] == 1:
    ans += 1
if two[0] == 1:
    ans += 2
if three[0] == 1:
    ans += 4
if four[0] == 1:
    ans += 8
    
print(ans)