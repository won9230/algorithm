#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0, ans = 0;

    int arr[201], dp[201];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        cin >> tmp;
        arr[i] = tmp;
    }
    

    for (int i = 0; i < 201; i++)
    {
        dp[i] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i] && dp[i] <= dp[j])
                dp[i] += 1;
        }
        ans = max(ans, dp[i]);
        
    }
    cout << n - ans;
}