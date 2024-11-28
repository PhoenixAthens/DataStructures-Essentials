#include <iostream>
using std::cout;
class Solution {
public:
    bool canAliceWin(int n) {
        int remove=10;
        while(n>0){
            if(remove>n){
                if(remove%2!=0){
                    return true;
                }
                return false;
            }else{
                n-=remove;
                remove--;
            }
            
        }
        return n==0 && remove==0;
    }
};
int main(){
    Solution s;
    cout << s.canAliceWin(12) << "\n";
    cout << s.canAliceWin(1) << "\n";
    cout << s.canAliceWin(10) << "\n";
}
