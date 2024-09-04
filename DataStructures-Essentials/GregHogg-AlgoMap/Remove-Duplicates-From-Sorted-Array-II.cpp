#include <vector>
#include <iostream>
#include <map>
using std::vector;
using std::cout;
using std::map;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mapMe;
        int k{0};
        for(int i=0;i<nums.size();i++){
            if(mapMe[nums[i]]==2){
                vector<int>::iterator it = nums.begin()+i;
                int temp{i};
                do{
                    temp++;
                }while(temp<nums.size() && *it==nums[temp]);
                nums.erase(it,nums.begin()+temp);
                i--;
            }else{
                mapMe[nums[i]]++;
                k++;
            }
        }
        return k;
    }
};

int main(int argc, char** argv){
    Solution s;
    vector<int> nums{0,0,1,1,1,1,2,3,3};
    int res = s.removeDuplicates(nums);
    for(int i=0;i<res;i++){
        cout << nums[i] << " ";
    }
    return 0;
}
