#include <iostream>
#include <vector>
#include <unordered_set>
using std::vector;
using std::cout;
using std::unordered_set;
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(k==1)return true;
        unordered_set<int> indexes;
        for(int i=0;i<=nums.size()-k;i++){
            if(nums[i+1]>nums[i]){
                bool flag = true;
                for(int j=i;j<i+k-1;j++){
                    if(nums[j+1]<=nums[j]){
                        flag=false;
                        break;
                    }
                }
                if(flag)indexes.insert(i);
            }
        }
        if(indexes.size()<2)return false;
        for(int i:indexes){
            if(indexes.find(i+k)!=indexes.end())return true;
        }
            
        return false;
    }
};
int main(){
    Solution s;
    vector<int> n1 {2,5,7,8,9,2,3,4,3,1};
    vector<int> n2 {1,2,3,4,4,4,4,5,6,7};
    vector<int> n3 {5,8,-2,-1};
    vector<int> n4 {-15,-13,4,7};
    cout << s.hasIncreasingSubarrays(n1, 3) << "\n";
    cout << s.hasIncreasingSubarrays(n2, 5) << "\n";
    cout << s.hasIncreasingSubarrays(n3, 2) << "\n";
    cout << s.hasIncreasingSubarrays(n4, 2) << "\n";
}
