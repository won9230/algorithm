#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    long long m, r, l;
    vector<int> cMax;
    int tmp = 0;
    int ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        cMax.push_back(tmp);
    }
    cin >> m;

    l = 0;
    r = m;
    tmp = 0;
    sort(cMax.begin(),cMax.end());
    for (int i = 0; i < cMax.size(); i++)
    {
        tmp += cMax[i];
    }
    if(tmp <= m)
    {
        cout << cMax.back();
        return 0;
    }
    
    while(r >= l){
        int mid = (r + l) / 2;

        tmp = 0;

        for (int i = 0; i < cMax.size(); i++)
        {
            tmp += min(mid, cMax[i]);
        }
        
        if(tmp > m)
        {

            r = mid - 1;
        }
        else
        {
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans;
}
