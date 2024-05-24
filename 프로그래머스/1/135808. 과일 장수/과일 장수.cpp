#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int> tmps;
    sort(score.begin(),score.end(),greater<int>());

    for (int i = 0; i < score.size(); i++)
    {
        int tmp = score[i];
        tmps.push_back(tmp);
        if(tmps.size() >= m)
        {
            int small = *min_element(tmps.begin(),tmps.end());
            answer += small * m;
            tmps.clear();
        }
    }
    return answer;
}