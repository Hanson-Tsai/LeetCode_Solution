class Solution {
public:
    bool isHappy(int n) {
        int fast = next(next(n));
        int slow = next(n);
        
        while(slow != fast){
            fast = next(next(fast));
            slow = next(slow);
        }
        
        if(fast == 1)return true;
        else return false;
    }
    
private:
    int next(int n){
        int sum = 0;
        while(n != 0){
            sum = sum + pow(n%10, 2);
            n = n/10;
        }
        return sum;
    }
};