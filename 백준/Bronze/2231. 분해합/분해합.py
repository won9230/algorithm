n = int(input())

fisrt = 0

while fisrt != n:
    strI = str(fisrt)
    listI = list(strI)
    listI = list(map(int,listI))
    tmp = 0
    for i in listI:
        tmp += i
    tmp += fisrt
    if tmp == n:
        break
    else:
        fisrt += 1
    if fisrt >= 1000000:
        fisrt = 0
        break

if fisrt == n:
    print(0)
else:
    print(fisrt)