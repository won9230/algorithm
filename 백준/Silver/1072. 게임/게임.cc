#include <iostream>
#include <algorithm>
#define MAX 1000000000
#define MIN 0

using namespace std;

int main()
{
    long long x = 0;
    long long y = 0;
    int z = x;
    cin >> x >> y;
    z = (100 * y) / x;

    long long r = MAX;
    long long l = MIN;

    if(z >= 99){
        cout << -1;
        return 0;
    }

    while (r >= l)
    {
        long long mid = (r + l) / 2;

        long long tmp = (y + mid) * 100 / (x + mid);

        if(tmp > z)
            r = mid - 1;
        else
            l = mid + 1;
    }
    
    cout << l;
}