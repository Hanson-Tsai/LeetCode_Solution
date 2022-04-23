class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = size(nums);
        int dp[n];
        int result = 1;
        dp[0] = 1;
        
        for(int i=1; i<n; i++){
            dp[i] = 1;
            
            for(int j=0; j<i; j++){
                if(nums[j] < nums[i]){
                    if(dp[i] < dp[j]+1)dp[i] = dp[j]+1;
                }
            }
            
            if(result < dp[i])result = dp[i];            
        }
        
        return result;
    }
};