class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>result;
      for(int i=0;i<nums.size()-2;i++){
        int l=i+1;
        int r=nums.size()-1;
        int target= -nums[i];
        while(l<r){
          int currsum= nums[l]+nums[r];
          if(currs==target){
            result.push_back({nums[i],nums[l],nums[r]});
            while(l<r && nums[l]==nums[l+1]) l++;
            while(l<r  && nums[r]==nums[r-1])  r--;
            l++;
            r--;
          }
          else  if(currs>target){
            r--;
          
          }
          else{l++;}
      }
    }
      return result;
}
