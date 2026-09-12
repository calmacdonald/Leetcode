class Solution(object):
    def maximumStrongPairXor(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        import math
        max = 0
        for i in range(n):
            for j in range(i):
                if nums[i]^nums[j] > max and math.sqrt((nums[i]-nums[j])**2) <= min(nums[i],nums[j]):
                    max = nums[i]^nums[j]
        
        return max