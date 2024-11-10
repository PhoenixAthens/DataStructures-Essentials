#include <iostream>
#include <vector>
#include <unordered_map>
using std::vector;
using std::cout;
using std::unordered_map;
using std::max;
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        unordered_map<int, int> u_map;
        for(int i=0;i<nums.size();i++){
            int j=i;
            while(j<nums.size()-1 && nums[j+1]>nums[j]){
                j++;
            }
            u_map[i]=j-i;
        }
        int max_k=INT_MIN;
        for(auto i: u_map){
            if(u_map.find(i.first+i.second)!=u_map.end()){
                max_k = max(max_k,i.second);
            }
        }
        return max_k;
    }
};
int main(){
    vector<int> v{-15,19};
    vector<int> v2{2,5,7,8,9,2,3,4,3,1};
    vector<int> v3{1,2,3,4,4,4,4,5,6,7};
    Solution s;
    cout << s.maxIncreasingSubarrays(v) << "\n";
}

