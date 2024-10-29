#include <iostream>

using namespace std;

int main(){
    int t = 0;
    
    cin >> t;
    while(t--)
    {
        unsigned long long n;
        unsigned long long l = 1;
        unsigned long long r = 10000000000000000;
        unsigned long long ans = 0;
        ans = 0;
        cin >> n;
        while(r >= l){

            unsigned long long mid = (r + l) / 2;
            
            if(mid * (mid + 1) <= n * 2)
            {
                ans = max(ans, mid);
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
}