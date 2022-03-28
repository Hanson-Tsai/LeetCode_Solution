class Solution {
public:
    // Time: O(NlogN)
    int majorityElement(vector<int>& nums) {
        if(nums.size() <= 1)return nums[0];
        int bound = nums.size()/2;
        int count = 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != nums[i+1]){
                count = 0;
            }else{
                count++;
            }
            
            if(count >= bound)return nums[i];
        }
        
        return nums[nums.size()];
        
    }
};