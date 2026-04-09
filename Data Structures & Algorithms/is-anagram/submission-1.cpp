class Solution {
public:
    bool isAnagram(string s, string t) {
        // if (s.size() != t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i = 0;i<s.size();i++){
        //     if(s[i]!=t[i]){
        //         return false;
        //     }
        // }
        // return true;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i = 0;i<s.length();i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        return mpp1==mpp2;
    }
};
