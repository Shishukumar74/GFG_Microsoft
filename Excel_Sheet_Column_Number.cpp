class Solution {
public:
    int titleToNumber(string s) {
        long result = 0;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            result = result*26+s[cnt]-'@';
            cnt++;
        }
        return result;
    }
};