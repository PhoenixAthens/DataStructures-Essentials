#include <vector>
#include <algorithm>
using std::vector;
using std::max;
using std::sort;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left = 0, ans = 0, n=nums.size();
        long curr = 0;
        for(int right = 0; right<n;right++){
            int target = nums[right];
            curr += target;
            while(target*(right-left+1)-curr > k){
                curr-=nums[left];
                left++;
            }
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};
