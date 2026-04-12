class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size()+word2.size();
        string word(n,' ');
        int i = 0;
        int j = 0;
        for(int k = 0;k<n;k++){
            if(k %2 ==0 && i<word1.size() || j>=word2.size()){
                word[k] =word1[i++];
            }else{
                word[k] =word2[j++];
            }
            
        }
        return word;
    }
};