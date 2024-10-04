#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> make(numRows);
        int i_size=0;
        while(i_size<s.size()){
            for(int i=0;i<numRows && i_size < s.size();i++){
                make[i].push_back(s[i_size++]);
            }
            for(int i=numRows-2;i>=1 && i_size < s.size();i--){
                make[i].push_back(s[i_size++]);
            }
        }
        string result;
        for(vector<char> v: make){
            for(char c: v){
                result.push_back(c);
            }
        }
        return result;
    }
};
int main(int argc, char** argv){
    Solution s;
    cout << s.convert("PAYPALISHIRING", 3) << "\n";
}
