int solve(vector<int>& nums) {
    unordered_map<int,int>m;
    int result=0;
    for(int i=0;i<nums.size();i++){
        result += m[nums[i]]++;
    }
    return result;
    
}