class Solution {
public:
   int firstoccur(vector<int>&nums, int target){
    int l=0;
    int h=nums.size()-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(target==nums[mid]){
            ans=mid;
            h=mid-1; //keep shifting left even if u find the ans
        }
        else if(target>nums[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
       
    }
    return ans;
    }
   int lastoccur(vector<int>&nums, int target){
    int l=0;
    int h=nums.size()-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(target==nums[mid]){
            ans=mid;
            l=mid+1;   //keep shifting rightwards
        }
        else if(target>nums[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
   }

    vector<int> searchRange(vector<int>& nums, int target) {
       return  {firstoccur(nums,target), lastoccur(nums,target)};
    }
};
