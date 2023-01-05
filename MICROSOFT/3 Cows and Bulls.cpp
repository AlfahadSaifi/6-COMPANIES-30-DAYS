/**********************Cows and Bulls*******************************************/


class Solution {
public:
    string getHint(string secret, string guess) {
        int cows=0,bulls=0;
        unordered_map<char,int> mp;
        
        for(auto it:secret){
           mp[it]++;
        }
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                bulls++;
                mp[guess[i]]--;
            }
        }
        for(int i=0;i<secret.size();i++){
            if(secret[i]!=guess[i]){
                if(mp.find(guess[i])==mp.end()) 
                    continue;
                else{
                    if(mp[guess[i]]>0){                         
                        cows++;
                        mp[guess[i]]--;
                    }
                }
            }
        }

        string hint=to_string(bulls);
        hint+="A";
        hint+=to_string(cows);
        hint+="B";
        
        return hint;
    }
};
