#include <iostream>

using namespace std;

int main()
{
    int n = 0, ans = 0;
    
    int arr[1001], dp[1001];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];   
    }

    for (int i = n; i >= 1; i--)
    {
        dp[i] = 1;
        for (int j = n; j > i; j--)
        {
            if(arr[i] > arr[j])
            {
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
        
    }
    
    cout << ans;

    return 0;
}