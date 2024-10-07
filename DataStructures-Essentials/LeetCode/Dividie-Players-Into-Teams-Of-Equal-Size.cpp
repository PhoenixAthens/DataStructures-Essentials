#include <algorithm>
#include <iostream>
#include <vector>
using std::sort;
using std::vector;
class Solution {
public:
    inline long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        long long prod{0};
        sort(skill.begin(),skill.end());
        int sum = skill[0]+skill[n-1];
        int start = 1;
        int end = n-2;
        prod+=(skill[0]*skill[n-1]);
        while(start<end){
            if(skill[start]+skill[end]!=sum)return -1;
            prod+=(skill[start]*skill[end]);
            start++;end--;
        }
        return prod;
    }
};
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
