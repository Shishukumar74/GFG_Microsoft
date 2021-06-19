class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int k = n-1;
        vector<int>result(n);
        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                result[k] = nums[j]*nums[j];
                k--;
                j--;
            }else{
                result[k] = nums[i]*nums[i];
                i++;
                k--;
            }
        }
        return result;
     }
};