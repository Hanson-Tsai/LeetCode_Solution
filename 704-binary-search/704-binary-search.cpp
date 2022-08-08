class Solution {
public:
    int search(vector<int>& nums, int target) {
        return bs(nums, target, 0 , nums.size()-1);
    }

private:
    int bs(vector<int>& nums, int target, int left, int right){
        if(left > right)return -1;
        
        int mid = left + (right - left) / 2;
        
        if(nums[mid] == target)return mid;
        else if(nums[mid] > target)return bs(nums, target, left, mid-1);
        else return bs(nums, target, mid+1, right);
    }
};