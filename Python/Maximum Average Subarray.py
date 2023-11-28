class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        sums = sum(nums[:k])
        maxSums = sums
        for i in range(len(nums)-k):
            sums-=nums[i]
            sums+=nums[i+k]
            maxSums = max(maxSums, sums)
        return float(maxSums)/float(k)
        
        #maxSum = None

        #for i in range(len(nums) - k + 1):
            #tempSum = sum(nums[i:i+k])
            #if tempSum > maxSum:
                #maxSum = tempSum
            #elif maxSum is None:
                #maxSum = tempSum
        #return float(maxSum)/float(k)

# https://leetcode.com/problems/maximum-average-subarray-i/