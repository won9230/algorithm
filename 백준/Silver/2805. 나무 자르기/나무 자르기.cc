#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    long long m = 0, r = 0, l = 0;
    vector<long long> tree;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        tree.push_back(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        r += tree[i];
    }
    
    while (r >= l)
    {
        long long mid = 0;
        long long tmp = 0;
        mid = (r + l) / 2;
        
        for (int i = 0; i < n; i++)
        {
            if(mid < tree[i])
                tmp += (tree[i] - mid);
        }
        
        if(tmp == m)
        {
            r = mid;
            break;
        }

        if(tmp < m)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }

        
    }
    
    cout << r;
    return 0;
}