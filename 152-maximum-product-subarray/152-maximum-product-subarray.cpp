class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int best = INT_MIN;
        int curMin = 1, curMax = 1;
        
        for(int num:nums){
            
            if( num < 0){
                swap(curMin, curMax);
            }
            
            curMin = min(curMin*num, num);
            curMax = max(curMax*num, num);
            
            best = max(curMax, best);
            
        }
        
        return best;
    }
};