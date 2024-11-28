#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::reverse;
int main(){
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    reverse(s1.begin(),s1.end());
    if(s1==s2)cout<<"YES\n";
    else cout<<"NO\n";
}
