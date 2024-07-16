#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> remainder(k);
        remainder[0]=1;
        int result = 0;
        int runningSum = 0;
        for(auto& a: nums){
            runningSum+=a;
            int mod = runningSum%k;
            if(mod<0)mod+=k;
            if(remainder[mod]>0){
                result+=remainder[mod];
            }
            remainder[mod]++;
        }
        return result;
    }
};
