class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i = 1;
        // int n = nums.size();
        // for(int j = 1;j<n;j++){
        //     if(nums[j]!=nums[j-1]){
        //         nums[i++]=nums[j];
        //     }
        // }
        // return i ;/
        set<int> unique(nums.begin(), nums.end());
        int i = 0;
        for (int num : unique) {
            nums[i++] = num;
        }
        return unique.size();
    }
};