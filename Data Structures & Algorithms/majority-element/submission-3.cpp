class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>mpp;
        // for(int i = 0;i<nums.size();i++){
        //      mpp[nums[i]]++;
        //      if(mpp[nums[i]]>nums.size()/2){
        //         return nums[i];
        //      }
        // }
        // int n = nums.size();
        // for(int num :nums){
        //     int count =0;
    //         for(int i :nums){
    //             if(i==num){
    //                 count++;
    //             }
    //         }
    //         if(count >n/2){
    //             return num;
    //         }
    //     }
    //     return -1;
    //
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2]; 




    }

};