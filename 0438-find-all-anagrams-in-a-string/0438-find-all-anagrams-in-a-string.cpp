class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int m=s.length();
        int n=p.length();
        if(n>m)return ans;
        vector<int>sfreq(26,0);
        vector<int>pfreq(26,0);
        for(char ch:p){
            pfreq[ch-'a']++;

        }
        for(int i=0;i<n;i++){
            sfreq[s[i]-'a']++;

        }
        if(sfreq==pfreq) {
            ans.push_back(0);

        }
        for(int i=n;i<m;i++){
            sfreq[s[i]-'a']++;
            sfreq[s[i-n]-'a']--;
            if(sfreq==pfreq){
            ans.push_back(i-n+1);
            }

        }
        return ans;
    }
};