class Solution(object):
    def countBattleships(self, board):
        """
        :type board: List[List[str]]
        :rtype: int
        """
        ships = 0

        # For each row in board
        for i in range(len(board)):

            # For each cell in the row
            for j in range(len(board[0])):

                # If a ship cell is detected
                if board[i][j] == "X":

                    # Cheack to make sure it is either the start of a row or column, or the cell behind the current cell is empty 
                    if (i == 0 or board[i-1][j] == ".") and (j == 0 or board[i][j-1] == "."):
                        ships+=1
        
        return ships

# https://leetcode.com/problems/battleships-in-a-board/