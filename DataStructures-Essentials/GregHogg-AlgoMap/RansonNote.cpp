#include <iostream>
using std::string;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26];
        for(char c: magazine)
            arr[c-'a']++;
        for(char c: ransomNote){
            if(arr[c-'a']==0)return false;
            arr[c-'a']--;
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
