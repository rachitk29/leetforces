#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1e9 + 7; 
        sort(nums.begin(), nums.end()); 
        int n = nums.size();
        vector<int> pow2(n, 1); 
        for (int i = 1; i < n; ++i) {
            pow2[i] = (pow2[i - 1] * 2) % MOD;
        }

        int left = 0, right = n - 1;
        int count = 0;

        while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                count = (count + pow2[right - left]) % MOD; 
                left++; 
            } else {
                right--; 
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 5, 6, 7};
    int target = 9;

    cout << "Number of valid subsequences: " << sol.numSubseq(nums, target) << endl;
    return 0;
}
