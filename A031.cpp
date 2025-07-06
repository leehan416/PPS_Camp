#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[42] = {0};
    int temp;
    int result = 0;

    for (int i = 0; i < 10; ++i) {
        cin >> temp;
        arr[temp % 42]++;
    }
    for (int i = 0; i < 42; ++i) {
        if (arr[i] > 0) result++;
    }

    cout << result << '\n';

    return 0;
}