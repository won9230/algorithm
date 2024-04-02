#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#define INF 987654321

using namespace std;

int N;
int d[3][201];
vector<pair<int,int>> node[201];

void dijkstra(int idx, int num)
{
    priority_queue<pair<int,int>> pq;
    pq.push({0, num});

    for (int i = 1; i <= N; i++)    //d초기화
    {
        d[idx][i] = INF;
    }
    d[idx][num] = 0;

    while (!pq.empty())
    {
        int w = pq.top().first;
        int x = pq.top().second;
        // cout << "w = " << w << "\nx = " << x << endl;
        pq.pop();
        // cout << "pq.empty = " << pq.empty() << endl;
        if(d[idx][x] < w)
        {
            continue;
        }

        for (int i = 0; i < node[x].size(); i++)
        {
            int nx = node[x][i].first;
            int nw = w + node[x][i].second;

            if(d[idx][nx] > nw)
            {
                d[idx][nx] = nw;
                pq.push({nw, nx});
            }
        }   
    }
}

//n = 지점개수 s = 출발지점 a = a의 도착지점 b = b의 도착지점 fares = 지점 사이 택시요금
int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = INT_MAX;
    N = n;
    for (int i = 0; i < fares.size(); i++)
    {
        node[fares[i][0]].push_back({fares[i][1], fares[i][2]});
        node[fares[i][1]].push_back({fares[i][0], fares[i][2]});
    }
    
    dijkstra(0, s);
    dijkstra(1, a);
    dijkstra(2, b);

    for (int i = 1; i <= n; i++)
    {
        if(d[0][i] == INF || d[1][i] == INF || d[2][i] == INF) continue;
        answer = min(answer, d[0][i] + d[1][i] + d[2][i]);
    }
    return answer;
}