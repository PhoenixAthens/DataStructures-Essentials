#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if((s[0]=='a' && s[1]=='b' && s[2]=='c') || (s[0]=='a' && s[1]=='c') || (s[1]=='a' && s[2]=='c') || (s[0]=='c' && s[2]=='a'))cout<<"YES\n";
        else cout<<"NO\n";
    }
}
