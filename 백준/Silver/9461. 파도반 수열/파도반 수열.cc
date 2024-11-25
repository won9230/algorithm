#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[105];
    long long int dp[105];
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }
    for (int i = 0; i < 105; i++)
    {
        dp[i] = 0;
    }
    dp[0] = 0; dp[1] = 1; dp[2] = 1; dp[3] = 1;
    for (int i = 4; i <= 101; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 3];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << dp[arr[i]] << "\n";
    }
    
}