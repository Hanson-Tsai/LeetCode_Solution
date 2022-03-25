class Solution {
public:
    int mySqrt(int x) {
        
        long long s=0, e=x, ans, mid, tmp;   //long long due to some of test cases overflows integer limit.
        
        while(s<=e){
            mid = (s+e)/2;
            tmp = mid*mid;
            if(tmp == x)return mid;
            else if(tmp < x){
                s = mid+1;
                ans = mid;
            }else e = mid -1;
        }
        return ans; 
    }
};