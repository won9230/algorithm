#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<pair<int,int>> a;


vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> sufo = {{1,2,3,4,5},{2, 1, 2, 3, 2, 4, 2, 5},{3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    // int count[3] = {0,0,0};
    vector<int> count = {0,0,0};
    for (int i = 0; i < answers.size(); i++)
    {
        // cout << sufo[0][i % sufo[0].size()] << " " << i % sufo[0].size() << "\n"; 
        if(sufo[0][i % sufo[0].size()] == answers[i])
        {
            count[0]++;
        }
        if(sufo[1][i % sufo[1].size()] == answers[i])
            count[1]++;
        if(sufo[2][i % sufo[2].size()] == answers[i])
            count[2]++;
    }
    
    int max = *max_element(count.begin(), count.end());
    for (int i = 0; i < 3; i++)
    {
        cout << count[i] << " " << max << "\n"; 
        if(count[i] == max)
            answer.push_back(i + 1);
    }
    
    return answer;
}