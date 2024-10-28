#include <iostream>
#include <vector>
using std::cout;
using std::string;
using std::vector;
class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        for(char& c: s){
            int mod = t%26;
            while(mod!=0){
                s.push_back('b');
            }
            
        }
    }
};
int main(int argc, char** argv){
    Solution s;
    cout << s.lengthAfterTransformations("jqktcurgdvlibczdsvnsg", 7517) << "\n";
}
