#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int mix = 0;
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i = 0; i < scoville.size(); i++)
    {
        pq.push(scoville[i]);
    }
    
    while(K > pq.top())
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        mix = a + (b * 2);
        pq.push(mix);
        answer++;
        if(pq.size() <= 1)
            break;
    }
    if(pq.top() < K){
        return -1;
    }
    else{
        return answer;
    }
}