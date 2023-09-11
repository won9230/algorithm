#include <iostream>

using namespace std;

int main(){
    int n, m, tmp;
    tmp = 0;
    int a[10000];
    int b[10000];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i] < m){
            b[tmp] = a[i];
            tmp++;       
        }
    }
    for(int i = 0; i < tmp; i++){
        cout << b[i] << " ";
    }
}