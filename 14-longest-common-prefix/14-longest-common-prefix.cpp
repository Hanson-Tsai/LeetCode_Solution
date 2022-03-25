class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        string first_str = strs[0];
            
        for(int i=0; i<size(first_str); i++){
            
            bool flag = true;
            char token = first_str[i];
            
            for(int j=1; j<size(strs); j++){
                
                string tmp_str = strs[j];
                if(tmp_str[i] != token){
                    flag = false;
                    break;
                }

            }
            
            if(flag){
                result += token;
            }else{
                break;
            }
            
        }
        
        return result;
    }
};