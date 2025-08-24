class Solution(object):
    def findCommonResponse(self, responses):
        """
        :type responses: List[List[str]]
        :rtype: str
        """
        freq = Counter()
        for r in responses:
            freq.update(set(r))
        maxCnt = max(freq.values())
        return min([w for w, c in freq.items() if c == maxCnt])