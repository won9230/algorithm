#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[1001];
    int dp[1001];

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }
    
    for (int i = 0; i < 1001; i++)
    {
        dp[i] = 1;
    }
    


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i] > arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = (dp[i] > ans) ? dp[i] : ans;
    }
    cout << ans;
}