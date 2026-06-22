class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>mp;
        int l=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            while(mp.count(s[i])){
                mp.erase(s[l]);
                l++;

            }
            mp.insert(s[i]);
            ans=max(ans,i-l+1);
        }
        return ans;
        
    }
};