class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();

        int XORR=0;

        for(int it : nums){
            XORR=XORR^it;
        }
        return XORR;
    }
};
