#include <iostream>
#include <unordered_map>
using std::string;
using std::unordered_map;
using std::min;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> balloon{{'a',0},{'b',0},{'l',0},{'n',0},{'o',0},{'s',0}};
        for(char c: text){
            if(balloon.contains(c))balloon[c]++;
        }
        balloon['o']/=2;
        balloon['l']/=2;
        int minVal = text.size();
        for(auto p: balloon){
            minVal = min(minVal,p.second);
        }
        
        return minVal;
        
    }
};
