class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int result = 0;
        
        for(int i=0; i<n; i++){
            result = result*26 + ((int)columnTitle[i] - 64);
        }
        return result;
    }
};