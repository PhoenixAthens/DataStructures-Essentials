#include <iostream>
#include <string>
using std::string;
using std::min;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int minLength = min(word1.length(),word2.length());
        string result = "";
        int i=0;
        for(;i<minLength;i++){
            result.push_back(word1[i]);
            result.push_back(word2[i]);
        }
        if(word1.length()<word2.length()){
            for(;i<word2.length();i++){
                result.push_back(word2[i]);
            }
        }else if(word2.length()<word1.length()){
            for(;i<word1.length();i++){
                result.push_back(word1[i]);
            }
        }
        return result;
    }
};
