#include <iostream>


using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    long long k = 1, ans = 1;
    
    cin >> n;
    
    while(n > k)
    {
        ans++;
        k = k * 2;
    }
    if(n == 0)
    {
        cout << 0;
    }
    else{
        cout << ans;
    }
}