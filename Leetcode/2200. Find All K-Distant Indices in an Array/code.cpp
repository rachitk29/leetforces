#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> resultSet;  

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == key) {
                int start = max(0, j - k);
                int end = min((int)nums.size() - 1, j + k);
                for (int i = start; i <= end; i++) {
                    resultSet.insert(i);
                }
            }
        }
        vector<int> result(resultSet.begin(), resultSet.end());
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 2, 1, 2};
    int key = 2;
    int k = 1;

    vector<int> result = sol.findKDistantIndices(nums, key, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}