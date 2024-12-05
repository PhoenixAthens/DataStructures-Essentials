#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if( (s[0]-'0'+s[1]-'0'+s[2]-'0') == (s[3]-'0'+s[4]-'0'+s[5]-'0')) cout<<"YES\n";
        else cout << "NO\n";
    }
}
