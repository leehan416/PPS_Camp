// https://www.acmicpc.net/problem/2217
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    int arr[100000];
    int max = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, greater<int>());

    max = arr[0];

    for (int i = 1; i < n; ++i) {
        int temp = arr[i] * (i + 1);
        if (max <= temp) max = temp;
    }
    cout << max << "\n";

    return 0;
}