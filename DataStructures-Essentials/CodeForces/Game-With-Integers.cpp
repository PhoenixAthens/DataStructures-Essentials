#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
//        if((n-1)%3==0 || (n+1)%3==0)cout<<"First\n";
//        else cout<<"Second\n";
        cout << (n%3==0?"Second\n":"First\n") << "\n";
    }
}
