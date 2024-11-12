#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int cnt = 0;
    vector<int> num_list;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        num_list.push_back(tmp);
    }
    
    for (int i = n - 1; i >= 1; i--)
    {
        while (num_list[i] <= num_list[i - 1])
        {
            num_list[i - 1] -= 1;
            cnt++;
        }
        
    }
    cout << cnt;
    return 0;
}