#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<long long, int>> times;

    // 강의 시작 시간과 종료 시간을 구분해 저장
    for (int i = 0; i < n; i++) {
        long long idx, start, end;
        cin >> idx >> start >> end;
        times.push_back({start, 1});  // 시작 시간
        times.push_back({end, -1});  // 종료 시간
    }

    // 시간 순으로 정렬, 같은 시간일 경우 종료를 먼저 처리
    sort(times.begin(), times.end(), [](const pair<long long, int>& a, const pair<long long, int>& b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

    int current = 0, maxRooms = 0;

    // 시작/종료 이벤트 순회
    for (const auto& time : times) {
        current += time.second;  // 시작이면 +1, 종료이면 -1
        maxRooms = max(maxRooms, current);  // 최대 강의실 개수 갱신
    }

    cout << maxRooms << endl;

    return 0;
}
