#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int max = 0;
    int cur = 0;
    int in;
    int out;

    for (int i = 0; i < 4; ++i) {
        cin >> out >> in;
        cur += in - out;
        if (max < cur) {
            max = cur;
        }
    }
    cout << max << '\n';

    return 0;
}