#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int v;
    int arr[100];
    int same = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cin >> v;

    for (int i = 0; i < n; ++i)
        if (arr[i] == v) same++;

    cout << same << "\n";
    return 0;
}