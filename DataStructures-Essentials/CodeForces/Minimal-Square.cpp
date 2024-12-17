#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int side;
        if(a>b){
            side = (b*2 < a)?a:2*b;
        }else{
            side = (a*2 < b)?b:2*a;
        }
        cout << (side*side) << "\n";
    }
}
