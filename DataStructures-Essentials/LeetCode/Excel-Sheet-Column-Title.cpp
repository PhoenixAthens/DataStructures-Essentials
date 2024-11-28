#include <iostream>
using std::cout;
using std::string;
using std::reverse;
class Solution {
public:
    string convertToTitle(int columnNumber) {
            string res;
            while(columnNumber){
                columnNumber--;
                res.push_back(columnNumber%26+'A');
                columnNumber = (columnNumber/26);
            }
            reverse(res.begin(),res.end());
            return res;
        }
};
int main(){
    Solution s;
    cout << s.convertToTitle(1) << "\n";
}
