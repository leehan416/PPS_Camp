#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if (i == n - 1) {
            sum += temp;
        } else {
            sum += temp - 1;
        }
    }
    cout << sum << '\n';

    return 0;
}