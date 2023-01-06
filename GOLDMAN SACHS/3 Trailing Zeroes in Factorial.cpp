************************ Factorial Trailing Zeroes *************************************


class Solution {
public:
    int trailingZeroes(int n) {
        if(n==0) return 0;
        int count=0;
        while(n){
            int a=n/5;
            count+=a;
            n=a;
        }
        return count;
    }
};