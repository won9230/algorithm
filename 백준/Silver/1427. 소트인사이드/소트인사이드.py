n = input()

tmp = []

for i in n:
    tmp.append(int(i))
    
tmp.sort(reverse=True)
print(''.join(map(str,tmp)))