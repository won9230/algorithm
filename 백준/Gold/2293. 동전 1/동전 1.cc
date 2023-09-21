#include <iostream>

using namespace std;

int main(){
    int n, k;
    
    cin >> n >> k;
    int coin[n + 1];
    int dp[10001];

    for (int i = 1; i <= n; i++)
    {
        cin >> coin[i];
    }
    for (int i = 0; i < 10001; i++)
    {
        dp[i] = 0;
    }
    
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = coin[i]; j <= k; j++)
        {
            dp[j] = dp[j] + dp[j - coin[i]];
        }
    }
    cout << dp[k];

    return 0;
}