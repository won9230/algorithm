#include <iostream>
#include <queue>

using namespace std;

priority_queue<int,vector<int>,greater<int>> q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(m == 0)
        {
            if(q.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << q.top() << "\n";
                q.pop();
            }
        }
        else
        {
            q.push(m);
        }
    }
    return 0;
}