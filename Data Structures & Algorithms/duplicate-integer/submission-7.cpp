class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for(int i = 0;i<nums.size();i++){
        //     for(int j = i + 1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        // unordered_map<int,int>mpp;
        // for(int i = 0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]]==2){
        //         return true;
        //     }
        // }
        // return false;
        // return unordered_set<int>(nums.begin(),nums.end()).size() <nums.size();
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                }
            }
        }
        return false;

    }
};