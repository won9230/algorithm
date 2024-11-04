#include <iostream>
#include <vector>


using namespace std;

int graph[101][101];
bool vistied[101];
int cnt = 0;
int ans = -1;
int n = 0, x = 0, y = 0, m = 0, tx = 0, ty = 0;


void dfs(int r){

    vistied[r] = true;
    if(r == y)
    {
        ans = cnt;
        return;
    }

    cnt++;


    for (int i = 1; i <= n; i++)
    {
        if(vistied[i] == true)
        {
            continue;
        }
        if(graph[r][i] == false)
        {
            continue;
        }
        dfs(i);
    }
    cnt--;
}

int main()
{
    cin >> n;
    cin >> x >> y;
    cin >> m;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            graph[i][j] = 0;
        }
        vistied[i] = false;

    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> tx >> ty;
        graph[tx][ty] = 1;
        graph[ty][tx] = 1; 
    }
    dfs(x);

    cout << ans;
}
