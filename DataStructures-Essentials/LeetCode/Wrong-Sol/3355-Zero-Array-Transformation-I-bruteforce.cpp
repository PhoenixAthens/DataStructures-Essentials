#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> res(nums.size());
        for(auto q: queries){
            for(int i=q[0];i<=q[1];i++){
                res[i]++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>res[i])return false;
        }
        return true;
            
    }
};
