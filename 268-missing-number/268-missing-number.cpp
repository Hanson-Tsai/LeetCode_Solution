class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 1){
            if(nums[0] == 0)return 1;
            else if(nums[0] == 1)return 0;
        }
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != i)return i;
        }
        
        return nums.size();
    }
};