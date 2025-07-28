#include <iostream>
#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;
using std::cout;
class Solution {
    
//466/824 test cases passing
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int discard{0};
        for(auto b: queries){
            if(nums[b[0]]>0 || nums[b[1]]>0){
                nums[b[0]]--;
                nums[b[1]]--;
            }else{
                discard++;
            }
        }
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return -1;
            }
        }
        return discard;
    }
};
int main(){
    Solution s;
    vector<int> a{2,0,2};
    vector<vector<int>> q{{0,2},{0,2},{1,1}};
    
    vector<int> a2{1,1,1,1};
    vector<vector<int>> q2{{1,3},{0,2},{1,3},{1,2}};
    
    vector<int> a3{1,2,3,4};
    vector<vector<int>> q3{{0,3}};
    
    cout << s.maxRemoval(a,q) << "\n";
    cout << s.maxRemoval(a2,q2) << "\n";
    cout << s.maxRemoval(a3,q3) << "\n";
    
}
