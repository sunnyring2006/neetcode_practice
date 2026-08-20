class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int>prefixSum(n);
        vector<int>suffixSum(n);
        vector<int>ans(n);

        prefixSum[0]=1;
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]*nums[i-1];
        }
        suffixSum[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffixSum[i]=suffixSum[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=prefixSum[i]*suffixSum[i];
        }
        return ans;
    }
};
