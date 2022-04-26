class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n <= 1)return nums[0];
        if(n == 2)return max(nums[0], nums[1]);
        if(n == 3)return max(nums[0], max(nums[1], nums[2]));
        
        vector<int> dp1(nums);
        vector<int> dp2(nums);
        
        dp1[1] = nums[0];
        dp2[n-2] = max(nums[n-1], nums[n-2]);
        
        for(int i=2; i<n-1; i++){
            dp1[i] = max(dp1[i-1], dp1[i-2]+nums[i]);
            dp2[n-1-i] = max(dp2[n-i], dp2[n-i+1] + nums[n-1-i]);
        }
        
        return max(dp1[n-2], dp2[1]);
    }
};