#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100001

using namespace std;

vector<int> graph[MAX];
bool visited[MAX];
int result[MAX];
int cnt = 0;

void DFS(int r){
    if(visited[r] == true)
        return;

    visited[r] = true;
    cnt++;
    result[r] = cnt;

    for (int i = 0; i < graph[r].size(); i++)
    {
        DFS(graph[r][i]);
    }
    
}


int main(){
    int n,m,r;
    for (int i = 0; i < MAX; i++)
    {
        visited[i] = false;
    }
    
    cin >> n >> m >> r;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    
    DFS(r);
    
    for (int i = 1; i <= n; i++)
    {
        cout << result[i] << "\n";
    }
     
}