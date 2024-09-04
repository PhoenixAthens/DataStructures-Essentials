class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0)return false;
        long n_copy = n;
        long result=0;
        while(n!=0){
            result = result * 10 + (n%10);
            n/=10;
        }
        return n_copy==result;
    }
};
