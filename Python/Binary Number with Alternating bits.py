class Solution(object):
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        num = bin(n)
        num = num[2:]
        for i in range(len(num)-1):
            if num[i] == num[i+1]:
                return False
        return True