#include <vector>
using std::vector;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n);
        int left = 0;
        int right = n-1;
        int Index = n-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                vec[Index--]=nums[left]*nums[left];
                left++;
            }else{
                vec[Index--]=nums[right]*nums[right];
                right--;
            }
        }
        return vec;
    }
};
int main(){
    Solution s;
    vector<int> i1{-4,-1,0,3,10};
    s.sortedSquares(i1);
}
