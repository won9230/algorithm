#include <iostream>
#include <vector>

#define MAX 9
using namespace std;


int n,m;
int arr[MAX];
bool visited[MAX];
vector<int> arr1;

void dfs(int depth)
{
    if(depth == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[depth] = i;
            dfs(depth + 1);
            visited[i] = false;
        }
    }
    
}

void Back()
{
    if(arr1.size() == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        bool tmp = false;
        for (int j = 0; j < arr1.size(); j++)
        {
            if(i == arr1[j])
                tmp = true;
        }
        if(!tmp)
        {
            arr1.push_back(i);
            Back();
            arr1.pop_back();
        }
        
    }
    
}

int main()
{
    cin >> n >> m;
    Back();
}
