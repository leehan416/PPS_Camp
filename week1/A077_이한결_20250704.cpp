#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int arr[8];
    int sortArr[8];
    int sum = 0;
    int outArr[5];
    int index = 0;

    for (int i = 0; i < 8; ++i) {
        cin >> arr[i];
        sortArr[i] = arr[i];
    }

    sort(sortArr, sortArr + 8, greater<int>());

    for (int i = 0; i < 5; ++i) {
        sum += sortArr[i];
        for (int j = 0; j < 8; ++j) {
            if (arr[j] == sortArr[i]) {
                outArr[index++] = j + 1;
            }
        }
    }
    sort(outArr, outArr + 5);

    cout << sum << "\n";
    for (int i = 0; i < 5; ++i) {
        cout << outArr[i] << " ";
    }
    cout << "\n";
    return 0;
}