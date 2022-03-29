class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int result = 0;
        
        for(int i=0; i<n; i++){
            result = result + ((int)columnTitle[i] - 64)*pow(26, n-1-i);
        }
        return result;
    }
};