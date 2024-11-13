#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int ans = 10;
    int tmp = 1;

    while(n >= tmp * 2)
    {
        ans++;
        tmp *= 2;
    }

    cout << ans;
}