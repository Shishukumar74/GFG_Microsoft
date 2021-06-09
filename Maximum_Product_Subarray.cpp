class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int ans,maxp,minp;
      ans=maxp=minp=arr[0];
      for(int i=1;i<arr.size();i++){
          if(arr[i]<0) swap(maxp,minp);
          maxp =max(maxp*arr[i],arr[i]);
          minp =min(minp*arr[i],arr[i]);
          ans = max(ans,maxp);
      }
      return ans;
   }
};