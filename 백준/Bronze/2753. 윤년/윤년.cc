#include <iostream>

using namespace std;

int main(){
    int n, ans;
    cin >> n;
    
    if(n % 4 == 0){
        if(n % 100 != 0 || n % 400 == 0){
            ans = 1;
        }
        else{
            ans = 0;
        }
    }
    else{
        ans = 0;
    }
    cout << ans;
}