class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1 > n2)return findMedianSortedArrays(nums2, nums1);
        
        int total = n1 + n2;
        int l = 0;
        int r = n1;
        double result = 0.0;
        
        while(l <= r){
            int i = l + (r - l) / 2;
            int j = (total + 1) / 2 - i;
            
            int left1 = (i > 0)?nums1[i-1]:INT_MIN;
            int right1 = (i < n1)?nums1[i]:INT_MAX;
            int left2 = (j > 0)?nums2[j-1]:INT_MIN;
            int right2 = (j < n2)?nums2[j]:INT_MAX;
            
            if(left1 <= right2 && left2 <= right1){
                if(total % 2 == 0){
                    result = (max(left1, left2) + min(right1, right2)) / 2.0;
                }else{
                    result = max(left1, left2);
                }
                break;
            }else if(left1 > right2){
                r = i - 1;
            }else{
                l = i + 1;
            }
        }
        
        return result;
    }
};