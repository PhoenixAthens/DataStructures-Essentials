#include <iostream>
#include <string>
using std::string;
using std::min;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        auto w1L = word1.length();
        auto w2L = word2.length();
        auto minlen = min(w1L,w2L);
        auto i = 0;
        for(;i<minlen;i++){
            result.push_back(word1[i]);
            result.push_back(word2[i]);
        }
        while(i<w1L){
            result.push_back(word1[i++]);
        }
        while(i<w2L){
            result.push_back(word2[i++]);
        }
        return result;
    }
};
