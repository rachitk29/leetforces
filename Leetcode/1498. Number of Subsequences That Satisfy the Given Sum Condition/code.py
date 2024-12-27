class Solution:
    def numSubseq(self, nums, target):
        MOD = 10**9 + 7
        nums.sort()  
        n = len(nums)

        pow2 = [1] * n
        for i in range(1, n):
            pow2[i] = (pow2[i - 1] * 2) % MOD

        left, right = 0, n - 1
        count = 0

        while left <= right:
            if nums[left] + nums[right] <= target:
                count = (count + pow2[right - left]) % MOD  
                left += 1  
            else:
                right -= 1  

        return count


# Example usage
sol = Solution()
nums = [3, 5, 6, 7]
target = 9
print("Number of valid subsequences:", sol.numSubseq(nums, target))
