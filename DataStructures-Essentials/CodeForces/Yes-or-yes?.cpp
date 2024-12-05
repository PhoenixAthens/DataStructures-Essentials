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
        if((s[0]=='y' || s[0]=='Y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='s'||s[2]=='S'))cout<<"YES\n";
        else cout<<"NO\n";
    }
}
