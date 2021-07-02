bool solve(vector<int>& nums) {
    int n = nums.size()-1;
    for(int i=0;i<nums.size()-1;++i){
        if(abs(nums[i]-nums[i+1]) != 1 && abs(nums[i]-nums[i+1]) != n) return false;
    }
    return true;
    
}