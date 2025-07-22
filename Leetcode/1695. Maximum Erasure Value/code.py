# Python Code: Sliding Window with Set
class Solution:
    def maximumUniqueSubarray(self, nums):
        ans = set()
        i = 0
        j = 0
        currSum = 0
        maxSum = 0

        while j < len(nums):
            # agr same nahi hai to insert kr do
            if nums[j] not in ans:
                ans.add(nums[j])
                currSum += nums[j]
                maxSum = max(currSum, maxSum)
                j += 1
            else:
                # agr same element hai to delete kr do
                ans.remove(nums[i])
                currSum -= nums[i]
                i += 1

        return maxSum

# Example usage
sol = Solution()
nums = [4, 2, 4, 5, 6]
print("Maximum score:", sol.maximumUniqueSubarray(nums))
