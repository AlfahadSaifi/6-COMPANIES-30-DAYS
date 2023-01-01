/**********************Combination Sum with a twist*******************************************/



class Solution {
public:
    set<vector<int>> s;
    void find(int ind,int digits,int sum,vector<int> &arr){
        if(ind>9) return;
        
        if(sum==0){
            if(arr.size()==digits)     
                s.insert(arr);
            return;
        }
        
        sum=sum-ind;
        arr.push_back(ind);
        find(ind+1,digits,sum,arr);
        arr.pop_back();
        sum=sum+ind;
        find(ind+1,digits,sum,arr);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        if(k>n) return ans;       
        find(1,k,n,arr);
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};