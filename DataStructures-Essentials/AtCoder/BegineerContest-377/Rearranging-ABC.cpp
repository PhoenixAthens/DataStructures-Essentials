#include <iostream>
using std::cout;
using std::cin;
using std::ios;
using std::string;
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

int main(){
    string s;
    cin >> s;
    int A{0};
    int B{0};
    int C{0};
    for(char c: s){
        if(c=='A')A++;
        else if(c=='B')B++;
        else if(c=='C')C++;
    }
    if(A==1 && B==1 && C==1)cout<<"Yes\n";
    else cout << "No\n";
    return 0;
}
