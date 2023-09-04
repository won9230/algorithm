import sys
import heapq

n, m, x = map(int,sys.stdin.readline().split())
INF = int(1e9)
graph = [[] for _ in range(n + 1)]

visited = [False] * (n + 1)



for i in range(m):
    a, b, cost = map(int, sys.stdin.readline().split())
    graph[a].append((b,cost))

def get_smallest_node(distance):
    min_val = INF
    index = 0
    for i in range(1, n + 1):
        if distance[i] < min_val and not visited[i]:
            min_val = distance[i]
            index = i
        return index
    
def dijkstra(start):
    q = []
    distance = [INF] * (n + 1)

    heapq.heappush(q, (0, start))
    distance[start] = 0
    while q:
        dist, now = heapq.heappop(q)

        if distance[now] < dist:
            continue
        
        for node_index, node_cost in graph[now]:
            cost = dist + node_cost

            if distance[node_index] > cost:
                distance[node_index] = cost
                heapq.heappush(q, (cost, node_index))

    return distance

result = 0

for i in range(1, n + 1):
    go = dijkstra(i)
    back = dijkstra(x)
    result = max(result, go[x] + back[i])

print(result)