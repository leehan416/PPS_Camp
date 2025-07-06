#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    int young = 0;
    int min = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;

        young += (temp / 30 + 1) * 10;
        min += (temp / 60 + 1) * 15;
    }
    if (min < young) {
        cout << "M " << min << '\n';
    } else if (young < min) {
        cout << "Y " << young << '\n';
    } else {
        cout << "Y M " << min << '\n';
    }

    return 0;
}