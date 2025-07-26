#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;

        for (int i = 0; i < s.length(); i++) {
            unordered_map<char, int> freq;

            for (int j = i; j < s.length(); j++) {
                freq[s[j]]++; 

                int maxFreq = INT_MIN, minFreq = INT_MAX;

                for (auto &pair : freq) {
                    maxFreq = max(maxFreq, pair.second);
                    minFreq = min(minFreq, pair.second);
                }

                totalBeauty += (maxFreq - minFreq);
            }
        }

        return totalBeauty;
    }
};

int main() {
    Solution sol;
    string s = "abcab";
    int result = sol.beautySum(s);
    cout << "Total Beauty Sum: " << result << endl;

    return 0;
}
