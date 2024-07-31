#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;

    queue<pair<int,int>> p;
    priority_queue<int> pq;

    for (int i = 0; i < priorities.size(); i++)
    {
        p.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    while(1)
    {
        // cout << pq.top() << " " << p.front().second << "\n";
        // cout << p.front().first << " " << location << "\n\n";
        if(pq.top() == p.front().second)
        {
            answer++;
            pq.pop();
            if(p.front().first == location)
                break;
        }
            p.push({p.front().first, p.front().second});
            p.pop();
    }
    

    return answer;
}