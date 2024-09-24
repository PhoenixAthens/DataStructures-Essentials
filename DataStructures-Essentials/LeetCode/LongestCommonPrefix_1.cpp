#include <iostream>
#include <vector>
#include <unordered_set>

using std::vector;
using std::cout;
using std::unordered_set;
using std::max;
//using HashSet
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> set_from_arr1;
        for(int i: arr1){
            while(set_from_arr1.count(i)==0 && i>0){
                set_from_arr1.insert(i);
                i/=10;
            }
        }
        int longestPrefi{0};
        for(int i: arr2){
            while(set_from_arr1.count(i)==0 && i>0){
                i/=10;
            }
            if(i>0){
                longestPrefi=max(longestPrefi,static_cast<int>(log10(i)+1));
            }
        }
        return longestPrefi;
    }
};
