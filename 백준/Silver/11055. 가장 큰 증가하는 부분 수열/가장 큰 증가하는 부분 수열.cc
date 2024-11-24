#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[1001];
    int dp[1001];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int tmp = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = arr[i];
        for (int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i] && dp[i] < dp[j] + arr[i])
            {
                dp[i] = dp[j] + arr[i];
            }
        }
        if(tmp < dp[i])
        {
            tmp = dp[i];  
        }
    }
    cout << tmp;
    
    return 0;
}