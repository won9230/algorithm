#include <iostream>
#include <stack>

using namespace std;

int main(){
    string line;
    cin >> line;
    stack<char> stack;

    int ans = 0;
    for (int i = 0; i < line.size(); i++)
    {
        if(line[i] == '('){
            stack.push(line[i]);
        }
        else{
            stack.pop();
            if(line[i - 1] == '(')
                ans += stack.size();
            else
                ans += 1;
        }
    }
    cout << ans;
}