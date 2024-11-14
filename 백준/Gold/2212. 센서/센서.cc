#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, ans = 0;
    vector<int> a;
    vector<int> b;

    cin >> n;
    cin >> k;
    
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    
    sort(a.begin(),a.end());

    for (int i = 1; i < a.size(); i++)
    {
        int tmp;
        tmp = a[i] - a[i - 1];

        b.push_back(tmp);
    }
    
    sort(b.begin(),b.end(),greater<>());

    for (int i = k - 1; i < b.size(); i++)
    {
        ans += b[i];
    }
        cout << ans;

    return 0;
}