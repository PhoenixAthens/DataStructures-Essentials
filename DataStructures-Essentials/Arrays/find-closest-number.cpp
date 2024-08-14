#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::max;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int diff = INT_MAX;
        int ans=nums[0];
        for(int i: nums){
            if(abs(i-0)<=diff){
                if(diff==abs(i-0))
                    ans=max(ans,i);
                else
                    ans = i;
                
                diff = abs(i-0);
                
                
            }
        }
        return ans;
    }
    int findClosestNumber_2(vector<int>& nums) {
        int curr=INT_MAX;
        int ans = curr;
        for(int i: nums){
            if(abs(i)==curr){
                curr = max(i,curr);
                ans = curr;
            }else if(abs(i)<curr){
                curr = abs(i);
                ans = i;
            }
        }
        return ans;
    }
};
int main(int argc, char** argv){
    vector<int> vec {-4,-2,1,4,8};
    vector<int> vec2 {2,-1,1};
    vector<int> vec3 {-100,-100};
    Solution sol = Solution();
    cout << sol.findClosestNumber_2(vec) << "\n";
    cout << sol.findClosestNumber_2(vec2) << "\n";
    cout << sol.findClosestNumber_2(vec3) << "\n";
    cout << max(1,1);
}
