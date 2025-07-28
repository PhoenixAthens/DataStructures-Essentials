#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> countArray(nums.size()+1);
        for(auto q: queries){
            countArray[q[0]]+=1;
            countArray[q[1]+1]-=1;
        }
        vector<int> countArrayResult;
        int prevSum{0};
        for(int i: countArray){
            prevSum+=i;
            countArrayResult.push_back(prevSum);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>countArrayResult[i])return false;
        }
        return true;
    }
};

//understand the code below:
class Solution2 {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        std::vector<int> d(nums.size()+1);
        
        d[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            d[i] = nums[i] - nums[i-1];
        }


        for (const auto& q : queries) {
            d[q[0]]--;
            d[q[1]+1]++;
        }

        int p = 0;
        for (int i = 0; i < nums.size(); ++i) {
            p += d[i];
            if (p > 0) {
                return false;
            }
        }
        return true;
    }
};
