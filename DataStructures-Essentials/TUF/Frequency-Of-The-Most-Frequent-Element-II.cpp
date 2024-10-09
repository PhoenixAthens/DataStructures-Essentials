#include <vector>
#include <iostream>
#include <algorithm>
using std::vector;
using std::sort;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long curr = 0;
        int left = 0;
        for(int right = 0; right < n; right++){
            curr += nums[right];
            long target = nums[right];
            if((right-left+1)*target-curr>k){
                curr-=nums[left];
                left++;
            }
        }
        return n-left;
    }
};
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

