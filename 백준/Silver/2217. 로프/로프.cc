#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100001];
    int a[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + n, greater<int>());

    for (int i = 1; i < n + 1; i++)
    {
        a[i] = i * arr[i - 1];
        // cout << a[i];
    }
    
    cout << *max_element(a, a + n + 1);

    return 0;
}