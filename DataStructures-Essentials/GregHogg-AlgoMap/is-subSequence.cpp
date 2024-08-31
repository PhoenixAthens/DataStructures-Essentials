#include <iostream>
#include <string>
using std::cout;
using std::string;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size()<s.size())return false;
        int j=0;
        for(int i=0;i<t.size() && j<s.size();i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        return j==s.size();
    }
};
