#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int size = p.length();
    for (int i = 0; i <= t.length() - size; ++i) {
        string temp = t.substr(i, size);
        if (temp <= p) answer++;
    }
    return answer;
}