#include <iostream>
#include <vector>

using namespace std;

int dp[105][100005] = {0, };

int main()
{
    int n,k;
    vector<pair<int,int>> a;

    cin >> n >> k;

    a.push_back({0,0});
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            int w = a[i].first;
            int v = a[i].second;

            if(w <= j)
            {
                // dp[i][j] = max((v + dp[i - 1][j - w]), dp[i - 1][j]);
                if((v + dp[i - 1][j - w] > dp[i - 1][j]))
                    dp[i][j] = v + dp[i - 1][j - w];
                else
                    dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    // for (int i = 0; i <= n + 1; i++)
    // {
    //     for (int j = 0; j <= k + 1; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    

    cout << dp[n][k];

    return 0;
}