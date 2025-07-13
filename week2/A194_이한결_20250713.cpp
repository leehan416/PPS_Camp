#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    int a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": ";
        cout << a << " + " << b << " = " << a + b << '\n';
    }
    return 0;
}