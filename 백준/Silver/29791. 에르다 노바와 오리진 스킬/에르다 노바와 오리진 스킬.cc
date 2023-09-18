#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n, m ;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int &i : a){
        cin >> i;
    }
    
    for(int &i : b){
        cin >> i;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int a1 = 0, b1 = 0, pa = 0, pb = 0;

    for(int i : a){
        if(pa == 0 || i - pa >= 100){
            a1++;
            pa = i;
        }
    }
    for (int i : b)
    {
        if(pb == 0 || i - pb >= 360){
            pb = i;
            b1++;
        }
    }
	cout << a1 << " " << b1;
}