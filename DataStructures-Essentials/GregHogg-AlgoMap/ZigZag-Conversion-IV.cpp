#include <iostream>
using std::cout;
using std::string;
class Solution {
public:
    string convert(string s, int numRows) {
        
        if (numRows == 1) {
            return s;
        }
        std::string result = "";
        //go through all rows
        for (int row = 0; row < numRows; row++) {
            //go through index until break
            for (int i = 0; i < INT_MAX; i += (numRows-1)*2) {
                //apply row shift
                int idx = i + row;
                if (idx >= s.length()) {
                    break;
                }
                result.push_back(s[idx]);

                //add second one if not on either end
                if ((row == 0) || (row == numRows -1)) {
                    continue;
                }
                idx = i + (numRows-1)*2 - row;
                // check again if it should break
                if (idx >= s.length()) {
                    break;
                }
                result.push_back(s[idx]);

            }
        }

        return result;
    }
};
int main(int argc, char** argv){
    Solution s;
    cout << s.convert("PAYPALISHIRING", 3) << "\n";
}
