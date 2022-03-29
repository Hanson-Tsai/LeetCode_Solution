class Solution {
public:
    int hammingWeight(uint32_t n) {
        int tmp = 0;
        int num = 0;
 
        for(int i=0; i<32; i++){
            tmp = n%2;
            n = n/2;
            if(tmp == 1)num++;
        }
        return num;
    }
};