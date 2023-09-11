#include <iostream>
#include <cmath>

using namespace std;

bool ma(int _a){
    for(int i = 2; i <= sqrt(_a); i++){
        if(_a % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    int a[10001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int tmp1 = a[i] / 2,tmp2 = a[i] / 2;
        for (int j = 0; j < (sizeof(a)/sizeof(*a)); j++)
        {
            if(ma(tmp1) && ma(tmp2)){
                break;
            }
            tmp1 -= 1;
            tmp2 += 1;
        }
        cout << tmp1 << " " << tmp2 << "\n";
    }
    


    
}
