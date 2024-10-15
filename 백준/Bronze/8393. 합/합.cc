#include <iostream>

using namespace std;

int main()
{
    int n, ans;
    cin >> n;
    ans = 0;

    for (int i = 0; i <= n; i++)
    {
        ans += i;
    }
    
    cout << ans;
}