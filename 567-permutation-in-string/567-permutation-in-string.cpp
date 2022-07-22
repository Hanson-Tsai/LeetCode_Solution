class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        vector<int> match(26);
        
        if(m > n)return false;
        
        for(int i=0; i<m; i++){
            match[s1[i]-'a']++;
            match[s2[i]-'a']--;
        }
        
        if(isPermutation(match))return true;
        
        for(int i=m; i<n; i++){
            match[s2[i]-'a']--;
            match[s2[i-m]-'a']++;
            if(isPermutation(match))return true;
        }
        return false;
    }

private:
    bool isPermutation(vector<int> match){
        for(int i=0; i<26; i++){
            if(match[i] != 0){
                return false;
            }
        }
        return true;
    }
};