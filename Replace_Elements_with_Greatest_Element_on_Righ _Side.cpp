class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp, maxi = -1;
        for(int i=arr.size()-1;i>=0;--i){
            temp = arr[i];
            arr[i] = maxi;
            maxi = max(maxi,temp);
        }
        return arr;
    }
};