#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        vector<int> card(n);
        char input;

        for (int i = 0; i < n; i++)
        {
            cin >> input;
            card[i] = int(input);
        }
        
        string result;
        result += char(card[0]);

        for (int i = 1; i < n; i++)
        {
            if(card[i] <= int(result[0]))
            {
                result = char(card[i]) + result;
            }
            else
            {
                result = result + char(card[i]);
            }
        }
        cout << result << "\n";
        
    }
    
}