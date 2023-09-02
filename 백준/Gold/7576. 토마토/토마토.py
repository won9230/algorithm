import sys
from collections import deque

n, m = map(int,sys.stdin.readline().split())
ans = 0
graph = []

dx = [1,-1,0,0]
dy = [0,0,1,-1]

for i in range(m):
        tmp = list(map(int,sys.stdin.readline().split()))
        graph.append(tmp)
        
visited = [[False] * n for _ in range(m)]
queue = deque()

def bfs():
    while queue:
        _x,_y = queue.popleft()
        for i in range(4):
            tmpX = _x + dx[i]
            tmpY = _y + dy[i]
            if tmpX >= 0 and tmpX < m and tmpY >= 0 and tmpY < n:
                if not visited[tmpX][tmpY] and graph[tmpX][tmpY] != -1:
                    visited[tmpX][tmpY] = True
                    graph[tmpX][tmpY] = graph[_x][_y] + 1
                    queue.append([tmpX, tmpY])


for i in range(m):
    for j in range(n):
        if graph[i][j] == 1:
            visited[i][j] = True
            queue.append((i,j))

bfs()
        
ans = 0
for i in range(m):
    for j in range(n):
        if graph[i][j] == 0:
            print(-1)
            exit()
    ans = max(ans, max(graph[i]))
print(ans - 1)