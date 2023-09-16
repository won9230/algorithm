#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    int a[n];
    int b[n];
    int ans1[n];
    int ans2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    
    
    for (int i = 0; i < n; i++)
    {
        int tmp = 1;
         for (int j = 0; j < n; j++)
         {
            if(a[i] < a[j] && b[i] < b[j]){
                tmp++;
            }
         }
        ans1[i] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans1[i] << " ";
    }
       

    return 0;
}