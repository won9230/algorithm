import sys
n = int(sys.stdin.readline())
count = 0
c = 0
new = n
while True:
    count += 1
    a = new // 10
    b = new - a * 10 
    c = a + b
    if c * 10 < 100:
        new = b *10 + c
    else:
        new = b * 10 + (c % 10)
    
    if new == n:
        break

print(count)