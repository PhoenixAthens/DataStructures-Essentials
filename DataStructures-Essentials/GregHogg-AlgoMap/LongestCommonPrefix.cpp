#include <vector>
#include <iostream>
using std::vector;
using std::string;

int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i=0;i<strs[0].size();i++){
            bool flag = true;
            for(string s: strs){
                if(strs[0][i]!=s[i]){
                    flag=false;
                    break;
                }
            }
            if(flag)ans.push_back(strs[0][i]);
            else break;
        }
        return ans;
    }
};
