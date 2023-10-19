import sys

a = sys.stdin.readline().strip()

i = 0
while True:
    i += 1
    num = str(i)
    while len(num) > 0 and len(a) > 0:
        if num[0] == a[0]:
            a = a[1:]
        num = num[1:]
    if a == '':
        print(i)
        break