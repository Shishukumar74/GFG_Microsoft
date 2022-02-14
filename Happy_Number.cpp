class Solution {
public:
    bool isHappy(int n) {
        int temp = n;
        while(1){
        if(temp==89)
            return false;
        if(temp==1)
            return true;
        temp = digitsum(temp);
    }
        
        
    }
    int digitsum(int n){
        int sum = 0;
        //int temp = n;
        while(n>0){
            int digit = n%10;
            sum = sum+(digit*digit);
            n /= 10;
        }
        return sum;
        
    }
};