#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        return 0;
    }

    int tmp = 2;
    while(n != 1)
    {
        if(n % tmp == 0){
            n = n / tmp;
            cout << tmp << "\n";
            tmp = 2;
        }
        else{
            tmp++;
        }
    }
    return 0;
}