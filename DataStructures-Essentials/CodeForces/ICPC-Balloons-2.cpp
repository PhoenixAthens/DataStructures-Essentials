#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t,n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        int z{0};
        for(char c: s){
            z |= 1<<(c-'A');
        }
        cout << __builtin_popcount(z)+n << "\n";
    }
}
