class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int tmp = 0;
        uint32_t reverse = 0;
 
        for(int i=0; i<32; i++){
            tmp = n%2;
            n = n/2;
            reverse = reverse*2 + tmp;
        }
        return reverse;
    }
};