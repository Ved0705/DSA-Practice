class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int l=0;
      int maxlen=0;
      int zeroes=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
          zeroes++;
    }
        while(zeroes>k){
          if(nums[l]==0){
            zeroes--;
        }
          l++;
}
maxlen=max(maxlen,i-l+1);
      }
return maxlen;
    };
