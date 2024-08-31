#include <iostream>
#include <map>
using std::cout;
using std::cin;
using std::map;
using std::string;
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> symbols{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int num = symbols[s[0]];
        int prev = s[0];
        for(int i = 1;i<s.size();i++){
            if(symbols[s[i]]>symbols[prev]){
                num -= 2*symbols[prev];
                num += symbols[s[i]];
            }else{
                num += symbols[s[i]];
                prev = s[i];
            }
        }
        return num;
    }
};

int main(int argc, char** argv){
    Solution s;
    cout << s.romanToInt("III") << "\n";
    cout << s.romanToInt("LVIII") << "\n";
    cout << s.romanToInt("MCMXCIV") << "\n";
}
