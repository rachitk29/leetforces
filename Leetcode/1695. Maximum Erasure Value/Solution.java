import java.util.HashSet;

public class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        HashSet<Integer> ans = new HashSet<>();
        int i = 0, j = 0;
        int currSum = 0, maxSum = 0;

        while (j < nums.length) {
            // agr same nahi hai to insert kr do 
            if (!ans.contains(nums[j])) {
                ans.add(nums[j]);
                currSum += nums[j];
                maxSum = Math.max(currSum, maxSum);
                j++;
            } else {
                // agr same element hai to delete kr do
                ans.remove(nums[i]);
                currSum -= nums[i];
                i++;
            }
        }

        return maxSum;
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {4, 2, 4, 5, 6};
        System.out.println("Maximum score: " + sol.maximumUniqueSubarray(nums));
    }
}
