#include <iostream>

using namespace std;

int main(){
    int n, k;
    int sum[100004];
    cin >> n >> k;

    int tmp;
    int ans = -10000001;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        sum[i] = sum[i - 1] + tmp;
    }

    for (int i = k; i <= n; i++)
    {
        if(ans < sum[i] - sum[i - k])
            ans = sum[i] - sum[i - k];
    }
    
    cout << ans;
}