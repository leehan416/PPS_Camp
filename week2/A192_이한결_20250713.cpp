#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    int temp = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        temp += i + 1;
    }
    cout << temp << '\n';
    return 0;
}