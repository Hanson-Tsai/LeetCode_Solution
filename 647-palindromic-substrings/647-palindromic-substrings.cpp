class Solution {
public:
    int countSubstrings(string s) {
        int result=0, n=s.size();
        
        for(int i=0; i<n; i++){
            int left=i,right=i;
            while(left>=0 && right<n && s[left]==s[right]){
                result++;
                left--;
                right++;
            }
        }
        
        for(int i=0; i<n; i++){
            int left=i,right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                result++;
                left--;
                right++;
            }
        }
    
        return result;
    }
};