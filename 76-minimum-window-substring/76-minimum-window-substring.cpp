class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() == 0 || t.size() == 0) return "";
        vector<int> TcharNum(128,0);
        int require = t.size();
        
        for(int i=0; i<require; i++){
            TcharNum[t[i]]++;    
        }
        
        int min=INT_MAX, start=0, end=0, minStart=0;
        
        while(start < s.size() && end <= s.size()){
            if(require){
                if(end == s.size())break;
                TcharNum[s[end]]--;
                if(TcharNum[s[end]] >= 0)require--;
                end++;
            }else{
                if(end - start < min){
                    min = end - start;
                    minStart = start;
                }
                TcharNum[s[start]]++;
                if(TcharNum[s[start]] > 0)require++;
                start++;
            }
        }
        
        return min == INT_MAX? "" : s.substr(minStart, min);
    }
};