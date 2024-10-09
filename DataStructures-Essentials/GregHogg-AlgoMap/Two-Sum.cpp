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
            mapOfR[nums[i]%target]=i;
        }
        vector<int> result;
        for(int i=0;i<n;i++){
            int rem = nums[i]%target;
            if(mapOfR[rem]!=i){
                result.push_back(i);
                result.push_back(mapOfR[rem]);
                break;
            }
        }
        return result;
    }
};
