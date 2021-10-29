bool solve(vector<int>& nums) {
    for (int i = 0; i <= nums.size() / 2; i++) {
        if (2 * i + 1 < nums.size() and nums[i] < nums[2 * i + 1] or
            2 * i + 2 < nums.size() and nums[i] < nums[2 * i + 2])

            return false;
    }

    return true;
 
}