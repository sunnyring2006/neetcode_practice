class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();

        // if(n>m) return false;
        // unordered_map<char,int> mpp;

        // if(n>800 || m>800) return true;

        // sort(s1.begin(),s1.end());

        // for(int i=0;i<m;i++){
        //     for(int j=0;j<m;j++){
        //         string subStr=s2.substr(i,j-i+1);
        //         mpp[subStr]++;
        //     }
        // }
        // for(auto it:mpp){
        //     sort(it.begin(),it.end());
        //     if(it==s1) return true;
        // }
        // return false;
        if (n > m) return false;

        sort(s1.begin(), s1.end());

        for (int i = 0; i <= m - n; i++) {
            string subStr = s2.substr(i, n);
            sort(subStr.begin(), subStr.end());

            if (subStr == s1)
                return true;
        }

        return false;

    }
};
