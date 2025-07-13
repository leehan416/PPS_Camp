#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if (a > b) cout << '>';
    else if (a < b) cout << '<';
    else cout << "==";
    cout << '\n';
    return 0;
}