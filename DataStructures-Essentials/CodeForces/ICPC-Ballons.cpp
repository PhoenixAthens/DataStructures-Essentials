#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        char characters[26]{0};
        int cntB{0};
        for(char c: s){
            if(characters[c-'A']==0)cntB+=2;
            else cntB++;
            characters[c-'A']++;
        }
        cout << cntB << "\n";
    }
    
}
