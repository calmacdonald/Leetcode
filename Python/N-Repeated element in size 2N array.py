class Solution(object):
    def repeatedNTimes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        list1 = []
        for i in nums:
            if i in list1:
                return i
            else:
                list1.append(i)