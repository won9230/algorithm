#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string,string>> players;
    map<string, string> map;
    for (int i = 0; i < record.size(); i++)
    {
        stringstream tmp(record[i]);
        vector<string> info;
        string s;

        while(tmp >> s)
        {
            info.push_back(s);
        }
        if(info[0] == "Change")
        {
            map[info[1]] = info[2];
        }
        else if(info[0] == "Enter")
        {
            map[info[1]] = info[2];
            players.push_back(make_pair("Enter",info[1]));
        }
        else
        {
            players.push_back(pair("Leave", info[1]));
        }
    }
    for (int i = 0; i < players.size(); i++)
    {
        if(players[i].first == "Enter"){
            answer.push_back(map[players[i].second] + "님이 들어왔습니다.");
        }
        else
        {
            answer.push_back(map[players[i].second] + "님이 나갔습니다.");
        }
    }
    

    return answer;
}