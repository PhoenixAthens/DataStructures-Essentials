#include <vector>
#include <set>
using std::vector;
using std::multiset;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        multiset<int> set0;
        for(int i: nums){
            set0.insert(i);
        }
        int j=0;
        for(int i: set0){
            nums[j++]=i;
        }
    }
    void sortColors_2(vector<int>& nums) {
        int zero = 0;
        int one  = 0;
        int two  = 0;
        for(int i: nums){
            if(i==0)zero++;
            else if(i==1)one++;
            else two++;
        }
        int i=0;
        while(zero!=0){
            nums[i++]=zero--;
        }
        while(one!=0){
            nums[i++]=one--;
        }
        while(two!=0){
            nums[i++]=two--;
        }
    }
};
