#include <vector>
#include <algorithm>
using std::vector;
using std::string;
using std::sort;
class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[2]+nums[0]>nums[1]){
            if(nums[0]==nums[1]){
                if(nums[1]==nums[2]){
                    return "equilateral";
                }else{
                    return "isosceles";
                }
            }else if(nums[1]==nums[2] || nums[2]==nums[0]){
                return "isosceles";
            }else{
                return "scalene";
            }
        }else{
            return "none";
        }
    }
    string triangleType_2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1] <= nums[2])return "none";
        else if(nums[0]==nums[2])return "equilateral";
        else if(nums[0]==nums[1] || nums[1]==nums[2]) return "isosceles";
        else return "scalene";
    }
};
