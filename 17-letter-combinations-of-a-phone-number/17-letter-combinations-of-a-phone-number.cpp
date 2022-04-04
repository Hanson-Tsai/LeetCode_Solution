class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        if (digits.empty()) return {};
		vector<string> result;
        vector<string> table(10);
        result.push_back("");
        
        table[0] = "";
        table[1] = "";
        table[2] = "abc";
        table[3] = "def";
        table[4] = "ghi";
        table[5] = "jkl";
        table[6] = "mno";
        table[7] = "pqrs";
        table[8] = "tuv";
        table[9] = "wxyz";

        for(auto digit: digits) {
            vector<string> tmp;
            for(auto candidate: table[digit - '0']) {
                for(auto s: result) {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }
};