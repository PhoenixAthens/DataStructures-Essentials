#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapOfR;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mapOfR[nums[i]]=i;
            int rem = target - nums[i];
            if(mapOfR.find(rem)!=mapOfR.end()){
                return {i,mapOfR[rem]};
            }
        }
        return {-1,-1};
    }
};
