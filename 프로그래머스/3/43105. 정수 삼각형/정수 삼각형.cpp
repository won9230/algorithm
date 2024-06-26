#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;

    int dp[501][501];
    dp[0][0] = triangle[0][0];

    for (int i = 1; i <= triangle.size() - 1; i++)
    {
        for (int j = 0; j < triangle.size() - 1; j++)
        {
            if(j == 0)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else if(j == i)
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]);
            }
            dp[i][j] += triangle[i][j];
        }
        
        for (int i = 0; i < triangle.size() - 1; i++)
        {
            if(dp[triangle.size() - 1][i] > answer)
            {
                answer = dp[triangle.size() - 1][i];
            }
        }
        
    }

    return answer;
}