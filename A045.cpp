#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string str;
    int arr[26] = {0};
    int originArr[26] = {0};

    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
        arr[str[i] - 'a']++;
        originArr[str[i] - 'a']++;
    }

    sort(arr, arr + 26, greater<int>());

    if (arr[0] == arr[1]) {
        cout << "?\n";
    } else {
        for (int i = 0; i < 26; ++i) {
            if (arr[0] == originArr[i]) {
                cout << (char)('A' + i) << endl;
                break;
            }
        }
    }

    return 0;
}