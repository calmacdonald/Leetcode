class Solution(object):
    def passThePillow(self, n, time):
        """
        :type n: int
        :type time: int
        :rtype: int
        """
        chunks = time // (n - 1)
        if chunks % 2 == 0:
            return (time % (n - 1) + 1)  
        else:
            return (n - time % (n - 1))