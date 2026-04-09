class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int res =0;int maxcount = 0;
        for(int i = 0;i<nums.size();i++){
             mpp[nums[i]]++;
             if(mpp[nums[i]]>maxcount){
                res = nums[i];
                maxcount= mpp[nums[i]];
             }
        }
        return res;
        
    }
};