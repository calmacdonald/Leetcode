class Solution(object):
    def alternateDigitSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = [int(x) for x in str(n)]

        for i in range(len(res)):
            if i % 2 == 0 and res[i] < 0:
                res[i] = abs(res[i])
            elif i % 2 != 0 and res[i] > 0:
                res[i] *= -1
        return sum(res)

# https://leetcode.com/problems/alternating-digit-sum/description/