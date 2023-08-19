import sys
import heapq

V, E = map(int, sys.stdin.readline().split())
INF = int(1e9)

start = int(sys.stdin.readline())

grahp = [[] for _ in range(V + 1)]

for _ in range(E):
    u, v, w = map(int,sys.stdin.readline().split())
    grahp[u].append((v, w))
    
visited = [False] * (V + 1)
distance = [INF] * (V + 1)

def dijkstra(start):
    q = []
    heapq.heappush(q,(0,start))
    distance[start] = 0
    while q:
        dist, now = heapq.heappop(q)
        
        if distance[now] < dist:
            continue
        
        for j in grahp[now]:
            cost = distance[now] + j[1]
            
            if cost < distance[j[0]]:
                distance[j[0]] = cost
                heapq.heappush(q,(cost,j[0]))
                
dijkstra(start)

for i in range(1, V + 1):
    if distance[i] == INF:
        print("INF")
    else:
        print(distance[i])