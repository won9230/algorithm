#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int a[301][301];

int dx[] = {1,2,2,1,-1,-2,-1,-2};
int dy[] = {2,1,-1,-2,-2,-1,2,1};

queue<pair<int, int>> q;

void bfs(int L)
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && nx < L && ny >= 0 && ny < L)
            {
                if(a[nx][ny] == -1)
                {
                    a[nx][ny] = a[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
        
    }
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        memset(a, -1, sizeof(a));

        int x1, y1;
        int x2, y2;
        int L;
        
        cin >> L;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        q.push(make_pair(x1,y1));
        a[x1][y1] = 0;
        bfs(L);

        cout << a[x2][y2] << "\n";
    }
    return 0;
}