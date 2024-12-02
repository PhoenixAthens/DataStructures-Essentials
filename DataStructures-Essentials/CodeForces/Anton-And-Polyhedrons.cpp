#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    string s;
    int ans{0};
    while(n--){
        cin >> s;
        if(s[0]=='T')ans+=4;
        else if(s[0]=='C')ans+=6;
        else if(s[0]=='O')ans+=8;
        else if(s[0]=='D')ans+=12;
        else ans+=20;
    }
    cout << ans << "\n";
}
