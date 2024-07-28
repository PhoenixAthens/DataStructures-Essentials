#include <cmath>
#include <iostream>
using std::cout;
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1){
            return 0;
        }
        if(k<=pow(2,n-1)/2){
            return kthGrammar(n-1,k);
        }else{
            int val = kthGrammar(n-1, k-pow(2,n-1)/2);
            return !val;
        }
    }
};
int main(){
    int a = 0;
    cout << !a << "\n";
}
