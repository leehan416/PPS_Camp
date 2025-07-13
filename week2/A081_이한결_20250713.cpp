#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        int arr[10];
        for (int j = 0; j < 10; ++j) {
            cin >> arr[j];
        }
        sort(arr, arr + 10, greater<int>());
        cout << arr[2] << '\n';
    }
    return 0;
}