#include <iostream>
#include <vector>
using std::vector;
using std::string;
class Solution {
public:
    bool isValid(string s) {
        vector<char> lastOpen;
        char lastEnc = s[0];
        lastOpen.push_back(lastEnc);
        for(int i=1;i<s.size();i++){
            if((lastEnc == '(' && s[i] == ')') || (lastEnc=='[' && s[i] == ']') || (lastEnc=='{' && s[i] == '}')){
                lastOpen.pop_back();
                if(lastOpen.size()!=0){
                    lastEnc=lastOpen.back();
                }else{
                    lastEnc = '0';
                }
            }else if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                lastEnc = s[i];
                lastOpen.push_back(lastEnc);
            }else{
                return false;
            }
        }
        return lastOpen.size()==0;
    }
};
