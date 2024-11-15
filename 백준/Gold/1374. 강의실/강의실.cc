#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> startTimes(n), endTimes(n);

    // 입력 받기
    for (int i = 0; i < n; i++) {
        long long idx, start, end;
        cin >> idx >> start >> end;
        startTimes[i] = start;
        endTimes[i] = end;
    }

    // 시작 시간과 종료 시간을 정렬
    sort(startTimes.begin(), startTimes.end());
    sort(endTimes.begin(), endTimes.end());

    // 두 포인터로 강의실 추적
    int rooms = 0, maxRooms = 0;
    int startIdx = 0, endIdx = 0;

    while (startIdx < n) {
        if (startTimes[startIdx] < endTimes[endIdx]) {
            // 강의가 시작되면 강의실 추가
            rooms++;
            maxRooms = max(maxRooms, rooms);
            startIdx++;
        } else {
            // 강의가 끝나면 강의실 반환
            rooms--;
            endIdx++;
        }
    }

    cout << maxRooms << endl;

    return 0;
}
