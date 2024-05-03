#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,v;
    cin >> a >> b >> v;
    int ans = (v - a) / (a - b);

    if((v - a) % (a - b) == 0){
        cout << ans + 1;
    }
    else{
        cout << ans + 2;
    }
}