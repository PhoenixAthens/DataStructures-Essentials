#include <vector>
#include <algorithm>
using std::vector;
using std::sort;
using std::max;

class Solution {
public:
    int check(int i, int k, vector<int>& prefSum, vector<int>& nums){
        int left = 0;
        int right = i;
        int best = i;
        while(left<right){
            int mid = left + (right-left)/2;
            int elementCount = i-mid+1;
            int tSum = elementCount*nums[i];
            int originalSum = prefSum[i]-prefSum[mid]+nums[mid];
            int operations = tSum - originalSum;
            if(operations > k){
                left=mid+1;
            }else{
                best = mid;
                right = mid-1;
            }
        }
        return i-best+1;
    }
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> prefixSum;
        prefixSum.push_back(nums[0]);
        int n = nums.size();
        for(int i = 1; i < n; i++){
            prefixSum.push_back(nums[i]+prefixSum[i-1]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,check(i,k,prefixSum,nums));
        }
        return ans;
    }
    
};
