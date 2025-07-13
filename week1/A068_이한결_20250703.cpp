#include <iostream>
#include <queue>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    queue<int> q;
    int n;
    string input;
    int inputNum;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input == "push") {
            cin >> inputNum;
            q.push(inputNum);
        } else if (input == "pop") {
            if (q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << q.front() << "\n";
                q.pop();
            }
        } else if (input == "size") {
            cout << q.size() << "\n";
        } else if (input == "empty") {
            cout << q.empty() << "\n";
        } else if (input == "front")
            if (q.empty()) {
                cout << -1 << "\n";
            } else {
                {
                    cout << q.front() << "\n";
                }
            }
        else if (input == "back") {
            if (q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << q.back() << "\n";
            }
        }
    }
    return 0;
}