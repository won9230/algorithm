#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a,b,cnt;
    int c[15001];
    cnt = 0;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    sort(c, c + a);
    int l = 0, r = a - 1;
    while (l < r)
    {
        if(c[l] + c[r] < b){
            l++;
        }
        else if(c[l] + c[r] > b){
            r--;
        }
        else{
            cnt++;
            l++;
            r--;
        }


    }
    cout << cnt;
    return 0;
}
