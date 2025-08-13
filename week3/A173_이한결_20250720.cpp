#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int arr[10] = {0};
    for (int i : numbers) {
        arr[i]++;
    }

    for (int i = 0; i < 10; ++i) {
        if (arr[i] == 0) {
            answer += i;
        }
    }
    return answer;
}