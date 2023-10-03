#include <iostream>

using namespace std;

int main(){
    int n,x;
    int arr[250001];
    int sum = 0;
    cin >> n >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int tmp = sum;
    int cnt = 1;
    for(int i = x; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i] - arr[i - x]; 
        if(tmp >= sum)
        {
            if(tmp == sum){
                cnt++;
            }

        }
        else
        {
            tmp = sum;
            cnt = 1;
        }
    }

    if(tmp == 0){
        cout << "SAD";
    }
    else{
        cout << tmp << "\n" << cnt;
    }


}