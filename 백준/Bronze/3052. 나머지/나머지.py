a = []

for i in range(10):
    tmp = int(input())
    b = tmp % 42
    a.append(b)

print(len(set(a)))

