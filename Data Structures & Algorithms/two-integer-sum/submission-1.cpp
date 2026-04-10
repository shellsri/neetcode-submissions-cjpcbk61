class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i =0;i<nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i = 0;i<n;i++){
            int diff = target - nums[i];
            if(mpp.find(diff)!=mpp.end()){
                return {mpp[diff],i};
            }
            mpp.insert({nums[i],i});
        }
        return {};
    }
};
