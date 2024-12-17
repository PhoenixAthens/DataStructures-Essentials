#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::max;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,a,b,c,d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        int max1 = max(a,b);
        int max2 = max(c,d);
        if((max2 < a && max2 < b) || (max1 < c && max1 < d))cout << "NO\n";
        else cout << "YES\n";
    }
}
