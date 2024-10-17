#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>
using std::pair;
using std::vector;
using std::string;
using std::unordered_map;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<long,vector<string>> uMap;
        for(string s: strs){
            long prod{1};
            for(char c: s){
                prod*=c;
            }
            if(uMap.find(prod)!=uMap.end()){
                uMap[prod] = vector<string>();
                uMap[prod].push_back(s);
            }else{
                uMap[prod].push_back(s);
            }
        }
        vector<vector<string>> result;
        for(pair<long,vector<string>> p: uMap){
            result.push_back(p.second);
        }
        return result;
    }
};
