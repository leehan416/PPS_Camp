#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    int dp[301];
    int score[301];

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> score[i];
    }

    dp[1] = score[1];
    dp[2] = score[1] + score[2];

    for (int i = 3; i <= n; ++i) {
        dp[i] = max(dp[i - 2], score[i - 1] + dp[i - 3]) + score[i];
    }
    cout << dp[n] << "\n";
    return 0;
}