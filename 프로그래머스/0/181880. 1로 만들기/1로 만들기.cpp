#include <string>
#include <vector>
using namespace std;
int solution(vector<int> num_list) {
    int answer = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        int a = num_list[i];
        while(a != 1)
        {
            a = a / 2;
            answer++;
        }
    }
    
    return answer;
}