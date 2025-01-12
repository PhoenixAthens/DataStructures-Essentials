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
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x{0},y{0};
        int movement{0};
        while((x!=1 || y!=1) && movement<n){
            if(s[movement]=='L')x--;
            else if(s[movement]=='R')x++;
            else if(s[movement]=='U')y++;
            else y--;
            movement++;
        }
        if(x==1&&y==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
