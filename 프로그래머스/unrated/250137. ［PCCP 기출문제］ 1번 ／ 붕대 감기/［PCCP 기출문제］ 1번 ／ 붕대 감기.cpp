#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int hp = health;
    int tmp = 0; //연속 공격
    int attacktime = 0;
    for (int i = 0; i < attacks[attacks.size() - 1][0] + 1; i++)
    {
        if(attacks[attacktime][0] == i)
        {
            hp -= attacks[attacktime][1];
            attacktime += 1;
            tmp = 0;
        }
        else
        {
            if(hp >= health)
            {
                hp = health;
            }
            else
            {
                hp += bandage[1];
                tmp += 1;
                if(tmp >= bandage[0])
                {
                    hp += bandage[2];
                    if(hp >= health)
                        hp = health; 
                    tmp = 0;
                }
            }
        }
        cout << hp << " ";
        if(hp <= 0)
        {
            return -1;
        }
    }

    return hp;
}
