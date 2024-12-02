#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << s[0] << s[s.size()-1] << "\n";
    }
}
