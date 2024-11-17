#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans{0};
        int count{0};
        for(int i: nums){
            if(count==0)ans=i;
            else if(i==ans)count++;
            else count--;
        }
        return ans;
    }
};
