#include <iostream>

using namespace std;

int main(){
    int n;
    string m;
    cin >> n >> m;

    cout << n * (m[2] - '0') << "\n";
    cout << n * (m[1] - '0') << "\n";
    cout << n * (m[0] - '0') << "\n";
    cout << n * stoi(m) << "\n";
}