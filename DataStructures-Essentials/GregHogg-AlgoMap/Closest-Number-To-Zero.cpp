#include <iostream>
#include <cmath>
#include <vector>
using std::vector;
using std::abs;
using std::cout;
using std::max;
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i:nums){
            if(abs(i)==abs(ans)){
                ans=max(i,ans);
            }else if(abs(i)<abs(ans)){
                ans = i;
            }
        }
        return ans;
    }
};
