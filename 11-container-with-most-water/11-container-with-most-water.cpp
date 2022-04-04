class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;
        int result = 0;
        
        while(left<right){
            int h = min(height[left], height[right]);
            result = max(h*(right-left), result);
            
            while(h >= height[left] && left<right)left++;
            while(h >= height[right] && left<right)right--;
        }
        
        return result;
    }
};