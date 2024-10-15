#include <iostream>

using namespace std;

int main()
{
    long n, ans;
    cin >> n;
    ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += i;
    }
    
    cout << ans;
}