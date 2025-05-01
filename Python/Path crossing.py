class Solution(object):
    def isPathCrossing(self, path):
        """
        :type path: str
        :rtype: bool
        """
        x = y = 0
        seen = {(0, 0)}
        for char in path:
            if char == 'N':
                y += 1
            elif char == 'S':
                y -= 1
            elif char == 'E':
                x += 1
            else:
                x -= 1
            if (x, y) in seen:
                return True    
            seen.add((x, y))
        return False