#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
int n, m, cnt;
bool flag;
vector<int> v[100001];
bool fan[100001];
bool visited[100001];

void DFS(int now){
    if(visited[now] || fan[now]) return; // 이미 방문한 노드 혹은 팬이 존재
    if(v[now].empty()){ // 더 이상 자식이 없음 -> 1번부터 리프까지 경로가 존재함
        flag = true;
        return;
    }
    
    visited[now] = true;
    for(int i=0; i<v[now].size(); i++){
        if(!visited[v[now][i]] && !fan[v[now][i]]){ // 방문하지 않았으면서 팬이 없는 경우에만 탐색
            DFS(v[now][i]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    } // 방향 그래프

    cin >> cnt;
    for(int i=0; i<cnt; i++){
        int a;
        cin >> a;
        fan[a] = true;
    } // 곰곰이 위치 표시

    DFS(1);
    if(flag) cout << "yes" << '\n';
    else cout << "Yes" << '\n';
    return 0;
}