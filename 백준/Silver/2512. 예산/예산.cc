#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n = 0;
    int start,end;
    int arr[100001];
    int m;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;

    sort(arr, arr + n);
    start = 0;
    end = arr[n - 1];
    
    while (start <= end)
    {
        int sum = 0;
        int mid = (start + end) / 2;


        for (int i = 0; i < n; i++)
        {
            sum += min(arr[i], mid);
        }

        if(sum <= m)
        {
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid - 1;
        }


    }
    cout << ans;
    return 0;
    
}
