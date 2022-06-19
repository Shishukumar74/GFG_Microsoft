class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]==' ') sum++;
            }
            maxi = max(maxi,sum);
            sum = 0;
        }
        return maxi+1;
        
        
    }
};