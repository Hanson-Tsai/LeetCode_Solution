class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int frombegin = 1;
        int fromback = 1;
        vector<int> result(n, 1);
        
        for(int i=0; i<n; i++){
            result[i] *= frombegin;
            frombegin *= nums[i];
            result[n-i-1] *= fromback;
            fromback *= nums[n-i-1];
        }
        
        return result;
    }
};