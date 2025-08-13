#include <string>
using namespace std;

bool solution(string s) {
    if (s.length() != 4 && s.length() != 6) return false;
    for (char c : s) {
        if (!('0' <= c && c <= '9')) return false;
    }
    return true;
}