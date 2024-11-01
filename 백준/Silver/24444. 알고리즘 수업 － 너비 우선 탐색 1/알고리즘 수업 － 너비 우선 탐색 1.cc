#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 100001
using namespace std;


bool visited[MAX];
vector<int> graph[MAX];
int answer[MAX];

void bfs(int r)
{
    int cnt = 0;
    queue<int> q;
    q.push(r);
    visited[r] = true;
    cnt++;
    answer[r] = cnt;

    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();

        for (int i = 0; i < graph[tmp].size(); i++)
        {
            int tp = graph[tmp][i];
            if(!visited[tp])
            {
                cnt++;
                answer[tp] = cnt;
                q.push(tp);
                visited[tp] = 1;
            }
        }
        
    }
}

int main()
{
    int n = 0,m = 0,r = 0;
    int u = 0, v = 0;
    cin >> n >> m >> r;
    for (int i = 0; i < MAX; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    
    bfs(r);
    for (int i = 1; i <= n; i++)
    {
        cout << answer[i] << "\n";
    }
    return 0;
}