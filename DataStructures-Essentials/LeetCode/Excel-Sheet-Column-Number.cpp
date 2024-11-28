#include <iostream>
using std::cout;
using std::cin;
using std::string;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans{0};
        for(char c: columnTitle){
            ans = ans*26+(c-'A'+1);
        }
        return ans;
    }
};
int main(){
    Solution s;
    cout << s.titleToNumber("A") << "\n";
    cout << s.titleToNumber("AB") << "\n";
    cout << s.titleToNumber("ZY") << "\n";
}
