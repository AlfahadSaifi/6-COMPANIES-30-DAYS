************************ Substring containing all three characters  *************************************

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0, j=0;
        vector<int> freq(3, 0);
        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
            while(freq[0] && freq[1] && freq[2]){
                count+=s.size()-i;
                freq[s[j]-'a']--;
                j++;
            }
        }
        return count;
    }
};