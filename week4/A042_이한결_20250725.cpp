#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_stack;
        stack<char> t_stack;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '#') {
                if(!s_stack.empty()) s_stack.pop();
            } else {
                s_stack.push(s[i]);
            }
        }
        for(int i=0; i<t.size(); i++) {
            if(t[i] == '#') {
                if(!t_stack.empty()) t_stack.pop();
            } else {
                t_stack.push(t[i]);
            }
        }
        if(s_stack.empty() && t_stack.empty()) return true;
        if(s_stack.empty() != t_stack.empty()) return false;
        while(!s_stack.empty() && !t_stack.empty()) {
            if(s_stack.top() != t_stack.top()) return false;
            s_stack.pop();
            t_stack.pop();
        }
        if(s_stack.empty() != t_stack.empty()) return false;
        return true;
    }
};