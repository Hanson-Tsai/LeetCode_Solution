class Solution {
public:
    bool findWord(vector<vector<char>> &board, string word, int i, int j){
        if (!word.size())
            return true;
        if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0])  
            return false;
        char c = board[i][j];
        board[i][j] = '*';
        string s = word.substr(1);
        bool ret = findWord(board, s,i-1, j) || findWord(board, s,i+1, j) || findWord(board, s, i, j-1) || findWord(board, s, i, j+1);
        board[i][j] = c;
        return ret;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(findWord(board, word, i, j))
                    return true;
            }
        }
        return false;
    }
};