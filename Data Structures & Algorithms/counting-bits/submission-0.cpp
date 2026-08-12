class Solution {
public:
    int countSetbits(int n){
        int count=0;
        while(n>0){
             n &= (n-1);
             count += 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i=0;i<=n;i++){
            ans.push_back(countSetbits(i));
        }
        return ans;
    }
};
