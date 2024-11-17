#include <cmath>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int sum = brown + yellow;
    for (int i = 3; i <= sqrt(sum); i++)
    {
        if(sum % i == 0)
        {
            int w = sum / i;

            if(((w + i) * 2 - 4) == brown)
            {
                answer.push_back(w);
                answer.push_back(i);
                break;
            }
        } 
    }
    
    
    
    return answer;
}