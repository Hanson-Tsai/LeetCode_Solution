class Solution {
public:
    // DP O(n^2)
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> val;
        
        for(int i=0; i<numRows; i++){
            vector<int> tmp;
            tmp.clear();
            for(int j=0; j<=i; j++){
                if(j ==0 || j==i){
                    tmp.push_back(1);
                }else{
                    int l = val[i-1][j-1];
                    int r = val[i-1][j];
                    tmp.push_back(l+r);
                }
            }
            val.push_back(tmp);
        }
        return val;
        
    }
};