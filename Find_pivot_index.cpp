class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int right_sum = 0;
        for(int i=0;i<n;i++){
            right_sum += nums[i];
        }
        int left_sum = 0;
        for(int i=0;i<n;i++){
            if(left_sum == right_sum-nums[i]){
                return i;
            }
            left_sum = left_sum+nums[i];
            right_sum = right_sum-nums[i];
        }
        return -1;
    }
};