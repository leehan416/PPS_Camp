#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int temp;
        cin >> temp;
        sum += temp * temp;
    }
    cout << sum % 10 << "\n";
}