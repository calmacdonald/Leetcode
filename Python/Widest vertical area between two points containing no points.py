class Solution(object):
    def maxWidthOfVerticalArea(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        lst = []
        for i, j in points:
            lst.append(i)
        lst.sort()

        dif = 0
        for i in range(len(lst)-1):
            n = lst[i+1] - lst[i]
            dif = max(dif, n)
        return dif