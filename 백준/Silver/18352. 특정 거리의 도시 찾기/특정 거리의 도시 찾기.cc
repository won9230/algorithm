#include <vector>
#include <iostream>
#include <list>

using namespace std;

int N, M, K, X;

vector<vector<int>> graph;
vector<int> dist;
vector<int> ans;

void bfs()
{
    int start = X;
    dist[X] = 0;

    list<int> q;
    q.push_back(X);

    while(!q.empty())
    {
        int now = q.front();
        q.pop_front();

        for (int i = 0; i < graph[now].size(); i++)
        {
            int next = graph[now][i];
            if(dist[next] == -1)
            {
                dist[next] = dist[now] + 1;
                q.push_back(next);
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if(dist[i] == K)
        {
            ans.push_back(i);
        }
    }
    
    
}

int main()
{
    cin >> N >> M >> K >> X;
    graph = vector<vector<int>> (N + 1);
    dist = vector<int>(N + 1, -1);

    for (int i = 0; i < M; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }
    bfs();
    if(ans.size() == 0) 
        cout << -1;
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << "\n";
        }
        
    }
    return 0;
}