class Solution(object):
    def countWords(self, words1, words2):
        """
        :type words1: List[str]
        :type words2: List[str]
        :rtype: int
        """
        count = 0
        c1 = Counter(words1)
        c2 = Counter(words2)
        for i in c1:
            if c1[i] == 1 and i in c2 and c2[i] == 1:
                count += 1   
        return count