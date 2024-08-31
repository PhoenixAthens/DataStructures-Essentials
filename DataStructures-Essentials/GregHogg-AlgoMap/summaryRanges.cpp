#include <vector>
#include <iostream>
using std::vector;
using std::string;
using std::to_string;

int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1 && nums[i+1]==nums[i]+1){
                string toAdd{to_string(nums[i])};
                do{
                    i++;
                }while(i!=nums.size()-1 && nums[i+1]==nums[i]+1);
                toAdd.append("->");
                toAdd.append(to_string(nums[i]));
                result.push_back(toAdd);
            }else{
                result.push_back(to_string(nums[i]));
            }
           
        }
        return result;
    }
};
int main(){
    
}
