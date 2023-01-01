/**********************Rotate Function*******************************************/

/*Intuition*/

/*
this is a dynamic programming problem sow we can solve it in three ways 
1 Memoization
2 Tabulation
3 Space Optimisation


^^^***here we have done this using space optimization***^^^

basically, first find the f(0) =0*4 + 1*3 + 2*2 + 3*6;
then find the             f(1) =0*6 + 1*4 + 2*3 + 3*2;


now you can find a pattern in these two equations
i.e. f(1) =f(0)+sum(array)-n*(last element in array after rotation);

now you can write either of the above mentioned solution!!
*/

class Solution {
public:
    
    int maxRotateFunction(vector<int>& nums) {
        int sum=0;int n=nums.size();
        int f=0;
        for(int i=0;i<n;i++){
            f+=nums[i]*i;
            sum+=nums[i];
        }
        if(n==1) return 0;
        int k=n-1;
        int maxi=f;
        while(k){
            f=f+sum-(n*nums[k--]);
            maxi=max(maxi,f);
        }
        
       return maxi; 
    }
};