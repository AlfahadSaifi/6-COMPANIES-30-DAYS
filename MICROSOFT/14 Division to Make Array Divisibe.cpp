************************ Division to make array divisible *************************************


class Solution {
public:
    
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int hcf=numsDivide[0];
        for(auto it:numsDivide){
            hcf=gcd(hcf,it);
        }
        
        sort(nums.begin(),nums.end());
        int i;
        for( i=0;i<nums.size();i++){
            if(hcf%nums[i]==0) break;
        }
        return i==nums.size()?-1:i;
    }
};
