#include <iostream>

using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;

    while (n > 0) {
        if (n % 5 == 0) {
            ans += n / 5;
            n = 0;
        } else if (n >= 2) {
            n -= 2;
            ans++;
        } else {
            // 거슬러 줄 수 없는 경우
            ans = -1;
            break;
        }
    }

    cout << ans;
    return 0;
}