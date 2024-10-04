#include <vector>
#include <iostream>
using std::vector;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remVec(k,0);
        for(int i: arr){
            remVec[(i%k+k)%k]++;
        }
        if(remVec[0]%2!=0)return false;
        if(k%2==0 && remVec[k/2]%2!=0)return false;
        for(int i=1;i<=k/2;i++){
            if(remVec[i]!=remVec[k-i])return false;
        }
        return true;
    }
};

static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
