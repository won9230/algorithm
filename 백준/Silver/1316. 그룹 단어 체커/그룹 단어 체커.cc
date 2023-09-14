#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string tmp;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        int size = tmp.length();
        bool check = true;
        if(size == 1){
            ans++;
        }
        else{
            for (int j = 0; j < size; j++)
            {
                for (int k = 0; k < j; k++)
                {
                    if(tmp[j] != tmp[j - 1] && tmp[j] == tmp[k]){
                        check = false;
                        break;
                    }
                }
                
            }
            if(check){
                ans++;
            }
        }

    }
    cout << ans;
}