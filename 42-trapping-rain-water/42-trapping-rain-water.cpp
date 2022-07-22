class Solution {
public:
    int trap(vector<int>& height) {
        int left=0, right=height.size()-1;
        int left_max=height[left], right_max=height[right];
        int ans = 0;
        
        while(left<right){
            if(left_max <= right_max){
                left++;
                int h = height[left];
                if(left_max < h){
                    left_max = h;
                }else{
                    ans += left_max - h; 
                }
            }else{
                right--;
                int h = height[right];
                if(right_max < h){
                    right_max = h;
                }else{
                    ans += right_max - h;
                }
            }
        }
        
        return ans;
    }
};