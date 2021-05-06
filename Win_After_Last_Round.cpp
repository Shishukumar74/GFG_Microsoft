int solve(vector<int>& nums) {
    if(nums.empty()) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int best = nums[n-1]+1;
    for(int i=n-2;i>=0;--i){
        best = max(best,nums[i]+(n-i));
    }
    for(int i=0;i<n;i++){
        if(nums[i]+n>=best) return n-i;
    }
    return 1;
    

}