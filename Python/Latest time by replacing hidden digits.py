class Solution(object):
    def maximumTime(self, time):
        """
        :type time: str
        :rtype: str
        """
        result = ""

        # Add first digit
        if time[0] == '?':
            if time[1] in "456789":
                result += "1"
            else:
                result += '2'
        else:
            result += time[0]

        # Second digit
        if time[1] == "?":
            if result[0] == "2":
                result += '3'
            else:
                result += '9'
        else:
            result += time[1]

        result += ":"

        # Third digit
        if time[3] == "?":
            result += "5"
        else:
            result += time[3]

        if time[4] == "?":
            result += "9"
        else:
            result += time[4]

        return result