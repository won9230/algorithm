#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        int a = num_list[i];
        int b;
        while(a != 1)
        {
            a = a / 2;            
            a = a * 1;
            b = 8;
            b += b * 2;
            b += 5;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            a -= 1;

            a += 1;

            answer++;
        }
    }
    return answer;
}