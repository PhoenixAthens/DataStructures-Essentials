#include <iostream>
using std::string;
class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0;
        int last = s.size();
        while(first<=last){
            if(!((s[first]>='a' && s[first]<='z') || (s[first]>='A' && s[first]<='Z') || (s[first]>='0' && s[first]<='9'))){
                first++;
            }else if(!((s[last]>='a' && s[last]<='z') || (s[last]>='A' && s[last]<='Z') || (s[last]>='0' && s[last]<='9'))){
                last--;
            }else{
                char fromFront = s[first];
                char fromLast = s[last];
                if(fromLast>='a')fromLast-=32;
                if(fromFront>='a')fromFront-=32;
                if(fromLast!=fromFront)return false;
                first++;
                last--;
            }
            
            
        }
        return true;
    }
};
