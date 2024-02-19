#include <string>
#include <vector>

using namespace std;

vector<vector<int>> answer;

void hanoi(int n, int start, int mid, int to){
    if(!n){
        return;
    }
    hanoi(n-1,start,to,mid);
    answer.push_back({start, to});
    hanoi(n-1,mid,start,to);
}

vector<vector<int>> solution(int n) {
    hanoi(n,1,2,3);
    return answer;
}


