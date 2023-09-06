import sys

tmp1 = input()
word = list(tmp1)

n = int(input())
m = []
stack = []
for i in range(n):
    m.append(sys.stdin.readline().split())

for i in m:
    if i[0] == 'L' and not len(word) == 0:
        tmp = word.pop()
        stack.append(tmp)
        continue
    elif i[0] == 'D' and not len(stack) == 0:
        tmp = stack.pop()
        word.append(tmp)
        continue
    elif i[0] == 'B' and not len(word) == 0:
        word.pop()
        continue
    elif i[0] == 'P':
        word.append(i[1])

for i in range(len(stack) - 1,-1,-1):
    word.append(stack[i])

print(''.join(word))