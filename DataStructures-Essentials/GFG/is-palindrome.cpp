#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::cin;

class Solution {
public:
    bool isPalindrome(string s) {
        string fixed;
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                fixed.push_back(s[i]);
            }else if(s[i]>=65 && s[i]<=90){
                fixed.push_back((char)(32+s[i]));
            }else if(s[i]>=48 && s[i]<=57){
                fixed.push_back(s[i]);
            }
        }
        if(fixed.size()==0)return true;
        else return isPal(0,fixed);
    }
    bool isPal(int i, string& str){
        if(i<str.size()/2){
            if(str[i]!=str[str.size()-i-1])return false;
            else return isPal(i+1, str);
        }
        else return true;
    }
};


bool isPalindrome(int i, string& str){
    if(i<str.size()/2){
        if(str[i]!=str[str.size()-i-1])return false;
        else return isPalindrome(i+1, str);
    }
    else return true;
}
int main(int argc, char** argv){
    string str{"0P"};
    cout << isPalindrome(0, str) << "\n";
    Solution s;
    cout << s.isPalindrome("A man, a plan, a canal: Panama") << "\n";
}

