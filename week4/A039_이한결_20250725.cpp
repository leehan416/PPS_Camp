#include <vector>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        double startInt = 1;
        while(1) {
            if(startInt*startInt < num) startInt++;
            else if(startInt*startInt == num) return true;
            else return false;
        }
        return false;
    }
};