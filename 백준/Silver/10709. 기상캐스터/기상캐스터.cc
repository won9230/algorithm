#include <iostream>

using namespace std;

int h,w;

char arr[101][101];
int ans[101][101];

int main(){
    cin >> h >> w;
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr[i][j];
            ans[i][j] = -1;
        }
    }

    for (int i = 0; i < h; i++)
    {
        bool sw = false;
        int tmp = 0;
        for (int j = 0; j < w; j++)
        {
            if(arr[i][j] == 'c')
            {
                tmp = 0;
                ans[i][j] = tmp;
                tmp++;
                sw = true;
            }
            else
            {
                if(sw == true)
                {
                    ans[i][j] = tmp;
                    tmp++;
                }
            }
        }
    }
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}