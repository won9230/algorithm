#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int sh, sw;
    int h, w;
    h = park.size();
    w = park[0].length();
    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[i].length(); j++)
        {
            if(park[i][j] == 'S')
            {
                sh = i;
                sw = j;
            }
        }
    }
    

    for (int i = 0; i < routes.size(); i++)
    {
        bool pass = false;
        int tmp = routes[i][2] - '0';
        switch (routes[i][0])
        {
        case 'E':
            if(w <= sw + tmp)
                break;
            for (int j = sw; j <= tmp + sw; j++)
            {
                if(park[sh][j] == 'X')
                {
                    pass = true;
                }
            }

            if(!pass)
            {
                sw += tmp;
            }
             break;
        case 'W':
            if(0 > sw - tmp)
                break;
            for (int j = sw; j >= sw - tmp; j--)
            {
                if(park[sh][j] == 'X')
                {
                    pass = true;
                }
            }
            if(!pass)
                sw -= tmp;
            break;
        case 'S':
            if(h <= sh + tmp)
                break;
            for (int j = sh; j <= sh + tmp; j++)
            {
                if(park[j][sw] == 'X')
                {
                    pass = true;
                }
            }
            if(!pass)
                sh += tmp;
            break;
        case 'N':
            if(0 > sh - tmp)
                break;
            for (int j = sh; j >= sh - tmp; j--)
            {
                if(park[j][sw] == 'X')
                {
                    pass = true;
                }
            }
            if(!pass)
                sh -= tmp;
            break;
        }
    }
    cout << sh << sw;
    answer.push_back(sh);
    answer.push_back(sw);
    return answer;
}

int main(){
    vector<string> a = {"OXXO", "XSXO", "XXXX"};
    vector<string> b = {"E 1", "S 1"};
    solution(a,b);
}