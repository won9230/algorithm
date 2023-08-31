n = int(input())
ans = 0
tmp = 1
# result = 666

while True:
    if '666' in str(tmp):
        ans += 1
    
    if ans == n:
        break

    tmp += 1

print(tmp)