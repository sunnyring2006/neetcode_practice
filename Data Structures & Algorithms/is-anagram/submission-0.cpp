class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();

        if(n != m) return false;

         int counts[26] = {0};
         int countt[26] ={0};

         for(int i=0;i<n;i++){
            counts[s[i]-'a']++;
            countt[t[i]-'a']++;
         }

         for(int i=0;i<26;i++){
            if(counts[i] != countt[i])  return false;
         }
         return true;
    }
};
