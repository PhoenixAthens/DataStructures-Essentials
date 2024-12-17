#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        int As{0},Bs{0};
        cin >> s;
        for(char c: s){
            if(c=='A')As++;
            else Bs++;
        }
        if(As>Bs)cout<<"A\n";
        else cout<<"B\n";
    }
}
