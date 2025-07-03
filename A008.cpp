#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    float arr[n];

    for (int i = 0; i < n; ++i) {
        int num;            // 총원 수
        int sum = 0;        // 점수 총합
        float average = 0;  // 평균 값
        int over = 0;       // 평균 이상
        cin >> num;
        int array[num];  // 점수 저장

        // 점수 입력, 총값 계산
        for (int j = 0; j < num; ++j) {
            cin >> array[j];
            sum += array[j];
        }

        // 평균 계산
        average = (float)sum / num;

        // 평균 이상인 인원 검사
        for (int j = 0; j < num; ++j) {
            if (average < array[j]) {
                over++;
            }
        }

        // 비율 계산
        float output = ((float)over / num) * 100;

        // 출력
        cout << fixed << setprecision(3) << output << "%" << endl;
    }
    return 0;
}