class Solution(object):
    def sumBase(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        digits = []
        while n>0:
            digits.append(n%k)
            n //= k

        return sum(digits)