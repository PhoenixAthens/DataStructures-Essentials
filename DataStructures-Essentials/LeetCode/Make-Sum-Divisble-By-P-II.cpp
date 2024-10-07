#include <unordered_map>
#include <algorithm>
#include <vector>
#include <iostream>

using std::vector;
using std::unordered_map;
using std::min;
using std::cout;


class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int totalSum{0};
        for(int i: nums){
            totalSum=(totalSum+i)%p;
        }
        int target = totalSum%p;
        if(target==0)return 0;
        
        unordered_map<int, int> prefixSum;
        prefixSum[0]=-1;
        int minLen = nums.size();
        int currentSum=0;
        for(int i=0;i<nums.size();i++){
            currentSum = (currentSum+nums[i])%p;
            int needed = (currentSum-target+p)%p;
            if(prefixSum.find(needed)!=prefixSum.end()){
                minLen = min(minLen,i-prefixSum[needed]);
            }
            prefixSum[currentSum]=i;
        }
        return minLen==nums.size()?-1:minLen;
    }
};
int main(int argc, char** argv){
    Solution s;
    vector<int> vec1{3,1,4,2};
//    vector<int> vec2{6,3,5,2};
//    vector<int> vec3{1,2,3};
    int p1 = 6;//, p2 = 9, p3 = 3;
    cout << s.minSubarray(vec1, p1) << "\n";
    //cout << s.minSubarray(vec2, p2) << "\n";
    //cout << s.minSubarray(vec3, p3) << "\n";
}
