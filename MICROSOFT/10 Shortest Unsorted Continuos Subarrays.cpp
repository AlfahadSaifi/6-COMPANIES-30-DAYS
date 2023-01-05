************************ Shortest Unsorted Continuos Subarrays *************************************

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
            temp.push_back(nums[i]);
        sort(nums.begin(),nums.end());
        
        int s=0;
        int r=nums.size()-1;
        
        if(nums==temp) return 0;
        
        for( int i=0;i<nums.size();i++){
            if(nums[i]!=temp[i]){
                s=i;
                break;
            }
        }
        for(int i=r;i>=0;i--){
            if(nums[i]!=temp[i]){
                r=i;
                break;
            }
        }
        
        return r-s+1;
    }
};