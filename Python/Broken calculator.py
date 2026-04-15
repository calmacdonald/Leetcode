class Solution(object):
    def brokenCalc(self, startValue, target):
        """
        :type startValue: int
        :type target: int
        :rtype: int
        """
        res = 0
        while startValue < target:
            res += target % 2 + 1
            target = (target + 1) / 2
        return res + startValue - target