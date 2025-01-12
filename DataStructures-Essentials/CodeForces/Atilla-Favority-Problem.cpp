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
        int mx{0};
        for(int i=0;i<n;i++)if(s[i]>mx)mx=s[i];
        cout << (mx-97)+1 << "\n";
    }
}
