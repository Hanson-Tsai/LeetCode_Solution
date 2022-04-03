class Solution {
public:
    int myAtoi(string s) {
        bool positive = true;
        bool flag = false;
        int result = 0;
        int start = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                if(flag)break;   
            }else if(s[i] == '-'){
                if(flag)break;
                positive = false;
                flag = true;
            }else if(s[i] == '+'){
                if(flag)break;
                positive = true;
                flag = true;
            }else{
                start = i;
                break;
            }
        }
        
        for(int i=start; i<s.size(); i++){
            if(s[i] - '0' > 9 || s[i] - '0' < 0)break;
            else{
                if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > 7))return positive ? INT_MAX : INT_MIN;
                else result = result*10 + (s[i] - '0');
            }
        }
        
        if(positive)return result;
        else return -1*result;
        
    }
};