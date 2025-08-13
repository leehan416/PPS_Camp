#include <string>
#include <vector>

using namespace std;
string solution(string number, int k) {
    vector<char> stk;
    for (char digit : number) {
        while (!stk.empty() && k > 0 && stk.back() < digit) {
            stk.pop_back();
            k--;
        }
        stk.push_back(digit);
    }
    while (k--) stk.pop_back();

    return string(stk.begin(), stk.end());
}