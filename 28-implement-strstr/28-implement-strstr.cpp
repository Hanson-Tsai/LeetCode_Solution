class Solution {
public:
    // KMP
    int strStr(string haystack, string needle) {
        int haystack_size = haystack.size();
        int needle_size = needle.size();
        
        for(int i=0; i<=haystack_size-needle_size; i++){
            int j=0;
            for(;  j<needle_size; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == needle_size){
                return i;
            }
        }
        
        return -1;
    }
};