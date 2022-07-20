class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> s;
        
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.')continue;
                auto it = s.find(board[i][j]);
                if(it != s.end()){
                    return false;
                }else{
                    s.insert(board[i][j]);
                }
            }
            s.clear();
        }
        
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[j][i] == '.')continue;
                auto it = s.find(board[j][i]);
                if(it != s.end()){
                    return false;
                }else{
                    s.insert(board[j][i]);
                }
            }
            s.clear();
        }
        
        for(int ii=0; ii<9; ii+=3){
            for(int jj=0; jj<9; jj+=3){
                for (int i = ii; i < ii + 3; i++) {
                    for (int j = jj; j < jj + 3; j++) {
                        if(board[i][j] == '.')continue;
                        auto it = s.find(board[i][j]);
                        if(it != s.end()){
                            return false;
                        }else{
                            s.insert(board[i][j]);
                        }
                    }
                }
                s.clear();
            }
        }
        
        return true;
    }
};