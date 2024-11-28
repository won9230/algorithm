#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;

    int arr[1001], a[1001], b[1001];

    cin >> n;



    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if(arr[i] > arr[j])
                a[i] = max(a[i], a[j] + 1);
        }
        
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        b[i] = 1;
        for (int j = n - 1; j > i; j--)
        {
            if(arr[i] > arr[j])
                b[i] = max(b[i], b[j] + 1);
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        int tmp = a[i] + b[i];
        if(tmp > ans)
            ans = tmp;
    }
    cout << ans - 1;
}