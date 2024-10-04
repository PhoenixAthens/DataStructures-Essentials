#include <string>
#include <iostream>
using std::cout;
using std::string;

class Solution {
public:
    string convert(string s, int numRows) {
        string create;
        int total = numRows + numRows-2;
        int j = total;
        int i = 0;
        while(j>=0){
            for(;i<s.size();i+=j){
                create.push_back(s[i]);
                int i_copy =(total-j);
                if(i_copy>0 && i+j<s.size() && i+j+i_copy<s.size()){
                    i+=j;
                    create.push_back(s[i]);
                    i+=i_copy;
                    create.push_back(s[i]);
                }
                
            }
            j-=(numRows-2);
            i=0;
            i++;
        }
        return create;
    }
};
int main(int argc, char** argv){
    Solution s;
    cout << s.convert("PAYPALISHIRING",4) << "\n";
    cout << s.convert("PAYPALISHIRING",3) << "\n";
    return 0;
}
