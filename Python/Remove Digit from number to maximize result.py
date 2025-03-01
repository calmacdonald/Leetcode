class Solution(object):
    def removeDigit(self, number, digit):
        """
        :type number: str
        :type digit: str
        :rtype: str
        """
        res = []
        for i in range(len(number)):
            if number[i] == digit:
                res.append(number[:i] + number[i+1:])
        return max(res)