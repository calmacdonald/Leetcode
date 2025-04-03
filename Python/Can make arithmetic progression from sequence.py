class Solution(object):
    def canMakeArithmeticProgression(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        arr.sort()
        idx = 1
        length = len(arr)
        diff = arr[1] - arr[0]
        while idx < length-1:
            if arr[idx+1] - arr[idx] != diff: return False
            idx += 1
        del idx, length, diff
        return True