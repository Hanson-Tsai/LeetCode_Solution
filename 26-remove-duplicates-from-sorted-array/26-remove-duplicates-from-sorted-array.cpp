class Solution {
public:
    // O(N)
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n != 0){
            int k = 0;
            for(int i=1; i<n; i++){
                if(nums[k] != nums[i]){
                   nums[++k] = nums[i];
                }
            }
            return k+1;
        }else{
            return n;
        }
    }
};