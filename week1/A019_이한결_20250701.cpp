#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c, num;
    string temp;
    int arr[10] = {0};

    cin >> a >> b >> c;

    num = a * b * c;
    temp = to_string(num);

    for (int i = 0; i < temp.length(); ++i)
        arr[temp[i] - '0']++;

    for (int i = 0; i < 10; ++i)
        cout << arr[i] << "\n";

    return 0;
}