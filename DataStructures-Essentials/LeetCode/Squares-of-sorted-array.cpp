#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums[0]<0){
            int start = 0;
            int end = nums.size()-1;
            for(int& i: nums){
                i*=i;
            }
            vector<int> sorted (nums.size());
            while(start<end){
                if(nums[start]<=nums[end]){
                    sorted[end]=nums[end];
                    end--;
                }else{
                    sorted[end]=nums[start];
                    start++;
                    end--;
                }
                    
            }
        }else{
            for(int& i: nums){
                i*=i;
            }
        }
        return nums;
    }
};

int main(int argc, char** argv){
    Solution sol = Solution();
    vector<int> vec({-4,-1,0,3,10});
    vector<int> result = sol.sortedSquares(vec);
    for(int i: result){
        cout<<i<<" ";
    }
}
