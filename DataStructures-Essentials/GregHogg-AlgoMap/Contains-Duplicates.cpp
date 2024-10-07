#include <vector>
#include <set>
#include <unordered_set>
using std::unordered_set;
using std::vector;
using std::set;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> fromNums;
        for(int i: nums){
            if(fromNums.count(i)>0)return true;
            else fromNums.insert(i);
        }
        return false;
        
    }
};
