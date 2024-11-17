#include <vector>
#include <unordered_set>
using std::unordered_set;
using std::vector;
using std::max;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> u_set;
        for(int i:nums)u_set.insert(i);
        int largestSubSequence = 0;
        for(int i:nums){
            if(u_set.find(i-1)==u_set.end()){
                int i_temp = i+1;
                int lenS = 1;
                while(u_set.find(i_temp)!=u_set.end()){
                    i_temp++;
                    lenS++;
                }
                largestSubSequence=max(largestSubSequence,lenS);
            }
        }
        return largestSubSequence;
        
    }
};
