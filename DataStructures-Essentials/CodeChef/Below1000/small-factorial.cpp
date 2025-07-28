#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        long long prod{1};
        while(num>1){
            prod*=num--;
        }
        cout << prod << "\n";
    }
}
