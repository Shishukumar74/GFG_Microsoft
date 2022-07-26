class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        unordered_map<int,int>mp;
        for(auto i : nums) mp[i]++;
        for(auto m : mp){
            cnt1 += m.second/2;
            cnt2 += m.second%2;
        }
        return {cnt1,cnt2};
    }
};