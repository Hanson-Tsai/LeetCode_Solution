class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> result;
        int i=0,j=0;
        int n = nums.size();
        
        while(j<n){
            while(!q.empty() && nums[q.back()]<nums[j]){
                q.pop_back();
            }
            
            q.push_back(j);
            
            if(i>q.front()){
                q.pop_front();
            }
            
            if(j+1>=k){
                result.push_back(nums[q.front()]);
                i++;
            }
            j++;
        }
        
        return result;
    }
};