#include <iostream>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::reverse;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        reverse(s.begin(),s.end());
        for(char& c: s){
            if(c=='p')c='q';
            else if(c=='q')c='p';
        }
        cout << s << "\n";
    }
}
