class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_set<char> charset;
            for(int j=i;j<n;j++){
                if(charset.find(s[j]) != charset.end()) break;
                charset.insert(s[j]);
            }
            ans =max(ans,(int)charset.size());
        }
        return ans;
    }
};
