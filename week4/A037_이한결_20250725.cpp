#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> list;
        for(int num=left; num<=right; num++) {
            int temp = num;
            bool valid = true;
            while(1) {
                int digit = temp%10;
                if(digit == 0) {
                    valid = false;
                    break;
                }
                if(digit == 0 || num%digit != 0) {
                    valid = false;
                    break;
                }
                temp = temp/10;
                if(temp <= 0) break;
            }
            if(valid) {
                list.push_back(num);
            }
        }
        return list;
    }
};