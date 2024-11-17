#include <vector>
#include <algorithm>
using std::vector;
using std::sort;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }else{
                int start = i+1;
                int end = nums.size()-1;
                while(start<end){
                    int sum = nums[i]+nums[start]+nums[end];
                    if(sum==0){
                        vector<int> temp{nums[i],nums[start],nums[end]};
                        result.push_back(temp);
                        int atStart = nums[start++];
                        int atEnd = nums[end--];
                        while(nums[start]==atStart)start++;
                        while(nums[end]==atEnd)end--;
                    }else if(sum>0){
                        end--;
                    }else if(sum<0){
                        start++;
                    }
                }
            }
        }
        return result;
    }
};
