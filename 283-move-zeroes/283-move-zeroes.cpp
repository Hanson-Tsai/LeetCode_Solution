class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int delete_num = 0;
        
        if(n < 1){}
        else{
            for(int i=0; i<n; i++){
                if(nums[i-delete_num] == 0){
                    nums.erase(nums.begin()+i-delete_num);
                    delete_num++;
                    nums.push_back(0);
                }
            }
        }
    }
};