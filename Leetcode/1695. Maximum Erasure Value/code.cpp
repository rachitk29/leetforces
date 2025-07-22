#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> ans;
        int i = 0, j = 0;
        int currSum = 0, maxSum = 0;

        while (j < nums.size()) {
            // agr same nahi hai to insert kr do 
            if (ans.find(nums[j]) == ans.end()) {
                ans.insert(nums[j]);
                currSum += nums[j];
                maxSum = max(currSum, maxSum);
                j++;
            } else {
                // agr same element hai to delete kr do
                ans.erase(nums[i]);
                currSum -= nums[i];
                i++;
            }
        }

        return maxSum;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {4, 2, 4, 5, 6};

    // Output the result
    cout << "Maximum score: " << sol.maximumUniqueSubarray(nums) << endl;

    return 0;
}
