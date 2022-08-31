class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;
        for (int i=0, sz=nums.size();i<sz;i++)
        pq.push({nums[i], i});
        int count = 1;    
        vector<string> res(nums.size());
        while(pq.size()){
            auto p = pq.top();
            pq.pop();
            if (count==1)
                res[p.second] = "Gold Medal";
            else if (count==2)
                res[p.second] = "Silver Medal";
            else if (count==3)
                res[p.second] = "Bronze Medal";
            else
                res[p.second] = to_string(count);
            count++;
        }
        return res;
    }
};