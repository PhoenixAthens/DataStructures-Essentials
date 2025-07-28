#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int val{0};
        val+=n/10;
        if(n%10!=0)val++;
        cout << val << "\n";
    }
}
