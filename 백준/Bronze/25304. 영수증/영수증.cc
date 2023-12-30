#include <iostream>

using namespace std;

int main()
{
    int x, n, a, b, ans;

    cin >> x;
    cin >> n;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ans += a * b;
    }
    if(ans == x){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}