#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> m;

    for (int i = 0; i < players.size(); i++)
    {
        m[players[i]] = i;
    }
    
    for (int i = 0; i < callings.size(); i++)
    {
        int tmp = m[callings[i]];

        m[players[tmp - 1]] += 1;
        m[callings[i]] -= 1;

        string stmp = players[tmp];
        players[tmp] = players[tmp - 1];
        players[tmp - 1] = stmp;
    }
    
    return players;
}