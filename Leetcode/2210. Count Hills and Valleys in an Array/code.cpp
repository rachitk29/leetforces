#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> vec;
        vec.push_back(nums[0]);
        
        // Remove adjacent duplicates
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                vec.push_back(nums[i]);
            }
        }

        int cnt = 0;
        for (int i = 1; i < vec.size() - 1; i++) {
            if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
                cnt++; // count the hills
            } else if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
                cnt++; // count the Valley
            }
        }
        return cnt;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.countHillValley(nums);
    cout << "Number of hills and valleys: " << result << endl;

    return 0;
}
