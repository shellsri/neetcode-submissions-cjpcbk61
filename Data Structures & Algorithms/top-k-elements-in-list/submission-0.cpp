class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        // Step 1: Count frequency
        for(int num : nums){
            mpp[num]++;
        }

        // Step 2: Bucket (index = frequency)
        vector<vector<int>> bucket(nums.size() + 1);

        for(auto it : mpp){
            int num = it.first;
            int freq = it.second;
            bucket[freq].push_back(num);
        }

        // Step 3: Traverse from high freq
        vector<int> ans;

        for(int i = bucket.size() - 1; i >= 0 && k > 0; i--){
            for(int num : bucket[i]){
                ans.push_back(num);
                k--;
                if(k == 0) break;
            }
        }

        return ans;
    }
};