class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int cell = 0;
        for (int i = 0; i < commands.size(); i++){
            if (commands[i] == "UP") cell -= n;
            else if (commands[i] == "RIGHT") cell += 1;
            else if (commands[i] == "DOWN") cell += n;
            else if (commands[i] == "LEFT") cell -= 1;
        }
        return cell;
    }
};