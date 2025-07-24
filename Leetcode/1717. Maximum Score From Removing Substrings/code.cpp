#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        int res = 0;

        char first, second;
        int high, low;

        // Determine which pair has higher value
        if (x > y) {
            first = 'a'; second = 'b';
            high = x; low = y;
        } else {
            first = 'b'; second = 'a';
            high = y; low = x;
        }

        // Step 1: Remove high-value pairs first
        for (char c : s) {
            if (!st.empty() && st.top() == first && c == second) {
                st.pop();
                res += high;
            } else {
                st.push(c);
            }
        }

        // Step 2: Collect remaining characters
        string remChar = "";
        while (!st.empty()) {
            remChar += st.top();
            st.pop();
        }
        reverse(remChar.begin(), remChar.end());

        // Step 3: Remove low-value pairs from remaining string
        stack<char> st2;
        for (char c : remChar) {
            if (!st2.empty() && st2.top() == second && c == first) {
                st2.pop();
                res += low;
            } else {
                st2.push(c);
            }
        }

        return res;
    }
};

// 🔽 Optional main() for local testing

int main() {
    Solution sol;
    string s = "cdbcbbaaabab";
    int x = 4, y = 5;
    cout << "Max Gain: " << sol.maximumGain(s, x, y) << endl; // Output: 19
    return 0;
}
