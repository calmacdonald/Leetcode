class Solution(object):
    def distributeCandies(self, candies, num_people):
        """
        :type candies: int
        :type num_people: int
        :rtype: List[int]
        """
        people = num_people * [0]
        give = 0
        while candies > 0:
            people[give % num_people] += min(candies, give + 1)
            give += 1
            candies -= give
        return people