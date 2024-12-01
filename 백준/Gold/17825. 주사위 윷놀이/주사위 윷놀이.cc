#include <iostream>
#include <climits>
using namespace std;

int dice[10];  
int piece[4]; 
int arr[34];   
int score[34]; 
int turn[34];   
bool check[34]; 

int ans = INT_MIN;
int get_max(int a, int b){ return a > b ? a : b; }

void dfs(int cnt, int sum){
  if(cnt == 10){
    ans = get_max(ans, sum);
    return;
  }

  for (int i = 0; i < 4; i++) {
    int prev = piece[i];
    int cur = prev;
    int move = dice[cnt];

    if(turn[cur] > 0){ 
      cur = turn[cur]; 
      move--;
    }

    while(move--) cur = arr[cur]; 

    if(cur!=21 && check[cur]) continue; 
    check[prev] = false;
    check[cur] = true;
    piece[i] = cur;

    dfs(cnt+1, sum+score[cur]); 
    piece[i] = prev;
    check[prev] = true;
    check[cur] = false;
  }
}

void init(){
  for (int i = 0; i < 21; i++) arr[i] = i+1;
  arr[21] = 21;
  for (int i = 22; i < 27; i++) arr[i] = i+1;
  arr[27] = 20; arr[28] = 29; arr[29] = 30;
  arr[30] = 25; arr[31] = 32; arr[32] = 25;

  turn[5] = 22; turn[10] = 31; turn[15] = 28;

  for (int i = 0; i < 21; i++) score[i] = 2 * i;
  score[22] = 13; score[23] = 16; score[24] = 19;
  score[25] = 25; score[26] = 30; score[27] = 35;
  score[28] = 28; score[29] = 27; score[30] = 26;
  score[31] = 22; score[32] = 24;
}

int main(){
  init();
  for (int i = 0; i < 10; i++) cin >> dice[i];
  dfs(0,0);

  cout << ans << endl;
  return 0;
}