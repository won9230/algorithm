import sys

n = int(input())

cost = list(map(int,sys.stdin.readline().split()))
road = list(map(int,sys.stdin.readline().split()))

ans = cost[0] * road[0]   #첫 주유소에서 무조건 필요한 가격
tmp1 = road[0]  #맨 처음 주유소 가격

for i in range(1, n - 1):
    if tmp1 > road[i]:  #주유소 가격이 더 작으면
        tmp1 = road[i]  #변경
    
    #계산
    ans += tmp1 * cost[i]

print(ans)