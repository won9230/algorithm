#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    int today_year = stoi(today.substr(0, 4));
    int today_month = stoi(today.substr(5, 2));
    int today_day = stoi(today.substr(8));

    int term[30] = {0, };

    for (int i = 0; i < terms.size(); i++)
    {
        char term_name = terms[i][0];
        int due_date = stoi(terms[i].substr(2));

        term[term_name - 'A'] = due_date * 28;
    }

    long today_long = today_year * 12 * 28 + today_month * 28 + today_day;
    
    for (int i = 0; i < privacies.size(); i++)
    {
        int tmp_year = stoi(privacies[i].substr(0, 4));
        int tmp_month = stoi(privacies[i].substr(5, 2));
        int tmp_day = stoi(privacies[i].substr(8));

        char tmp_term_name = privacies[i][11];

        long tmp_long = tmp_year * 12 * 28 + tmp_month * 28 + tmp_day;

        long diff = today_long - tmp_long;

        if(diff >= term[tmp_term_name - 'A'])
            answer.push_back(i + 1);
        else   
            continue;
    }
    

    return answer;
}