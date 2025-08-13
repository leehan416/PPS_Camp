#include <vector>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int len = s.length();
        char* first = &s[0];
        char* second = &s[len/2];
        int f_count = 0;
        int s_count = 0;
        for(int i=0; i<len/2; i++) {
            char tempF = tolower(first[i]);
            switch(tempF) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    f_count++;
                    break;
                default:
                    break;
            }
            char tempS = tolower(second[i]);
            switch(tempS) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    s_count++;
                    break;
                default:
                    break;
            }
        }
        return f_count == s_count;
    }
};