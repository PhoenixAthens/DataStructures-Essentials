#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;
using std::swap;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        size_t start = 0;
        size_t end = nums.size()-1;
        size_t k = end;
        while(start<=end){
            int sink = nums[end]*nums[end];
            int source = nums[start]*nums[start];
            if(sink<=source){
                result[k--]=source;
                start++;
            }else{
                result[k--]=sink;
                end--;
            }
            
        }
        return result;
    }
    vector<int> sortedSquares_2(vector<int>& nums) {
            for(int& i:nums)i*=i;
            vector<int> result(nums.size());
            int start = 0;
            int end = nums.size()-1;
            int k = end;
            while(start<=end){
                if(nums[end]<=nums[start]){
                    result[k--]=nums[start];
                    start++;
                }else{
                    result[k--]=nums[end];
                    end--;
                }
                
            }
            return result;
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
