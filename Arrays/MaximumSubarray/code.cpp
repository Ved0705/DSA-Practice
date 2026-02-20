class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int currs=nums[0];
      int maxs=nums[0];
      for(int i:nums){
        currs=max(i,i+currs);
        maxs=max(maxs,currs);
    }
      return(maxs);
}
}
