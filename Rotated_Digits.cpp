class Solution {
public:
    int rotatedDigits(int n) {
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(check(i)==0)
                continue;
            else
                cnt++;
        }
        return cnt;
    }
    
    int check(int num){
        int count = 0;
        while(num>0){
            int a = num%10;
            if(a==3||a==4||a==7)
                return 0;
            if(a==2||a==5||a==6||a==9)
                count++;
            num/=10;
        }
        return count;
    }
};