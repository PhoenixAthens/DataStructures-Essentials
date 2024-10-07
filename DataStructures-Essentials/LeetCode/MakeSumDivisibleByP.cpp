#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

using std::lower_bound;
using std::vector;
using std::set;
using std::cout;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
            set<int> setOfRems;
            int sum{0};
            for(int i: nums){
                setOfRems.insert(i%p);
                sum+=(i%p);
            }
            if(sum<p && sum!=0)return -1;
            int count{0};
            while(sum%p!=0){
                int rem = sum%p;
                auto l = *lower_bound(setOfRems.begin(),setOfRems.end(),rem);
                //if(l==setOfRems.end())return -1;
                sum-=(l);
                count++;
            }
            return count;
        }
};
int main(int argc, char** argv){
    vector<int> nums1{3,1,4,2};
    vector<int> nums2{6,3,5,2};
    vector<int> nums3{1,2,3};
    Solution s;
    cout << s.minSubarray(nums1, 6) << "\n";
    cout << s.minSubarray(nums2, 9) << "\n";
    cout << s.minSubarray(nums3, 3) << "\n";
}
