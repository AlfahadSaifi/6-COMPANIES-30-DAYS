********************largest divisible subset*************************************

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        vector<int> dp(n, 1), hash(n, 0);
        
        int len = 0, lastInd = -1;
        for(int i = 0; i < n; i++){
            hash[i] = i;
            for(int j = 0; j < i; j++){
                if(nums[i]%nums[j] == 0 && dp[j]+1 > dp[i]){
                    dp[i] = dp[j]+1;
                    hash[i] = j;
                }
            }
            if(dp[i] > len){
                len = dp[i];
                lastInd = i;
            }
        }
        vector<int> ans;
        while(hash[lastInd] != lastInd){
            ans.push_back(nums[lastInd]);
            lastInd = hash[lastInd];
        }
        ans.push_back(nums[lastInd]);
        return ans;
    }
};
