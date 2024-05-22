#include <string>
#include <vector>
#include <queue>
#include <iostream>
#define INF 987654321

using namespace std;

int N;

// vector<pair<int,int>> a[201];
vector<pair<int,int>> node[201];
int d[3][201];

void dijkstra(int idx, int start)
{
    for (int i = 1; i <= N; i++)
    {
        d[idx][i] = INF;
    }
    
    d[idx][start] = 0;
    priority_queue<pair<int,int>> pq;
    pq.push(make_pair(start, 0));

    while (!pq.empty())
    {
        int current = pq.top().first;
        int distance = -pq.top().second;
        pq.pop();
        if(d[idx][current] < distance) continue;

        for (int i = 0; i < node[current].size(); i++)
        {
            int next = node[current][i].first;
            int nextDistance = distance + node[current][i].second;

            if(nextDistance < d[idx][next])
            {
                d[idx][next] = nextDistance;
                pq.push(make_pair(next, -nextDistance));
            }
        }           
    }
}


int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = INF;
    N = n;
    for (int i = 0; i < fares.size(); i++)
    {
        node[fares[i][0]].push_back(make_pair(fares[i][1],fares[i][2]));
        node[fares[i][1]].push_back(make_pair(fares[i][0],fares[i][2]));
    }

    dijkstra(0, s);
    dijkstra(1, a);
    dijkstra(2, b);

    for (int i = 1; i <= n; i++)
    {
        if(d[0][i] == INF || d[1][i] == INF || d[2][i] == INF) continue;
        cout << d[0][i] << " " << d[1][i] << " " << d[2][i] << "\n";
        answer = min(answer, d[0][i] + d[1][i] + d[2][i]);
    }
    
    return answer;
}