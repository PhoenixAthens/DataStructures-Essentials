#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,m,a,b,c;
    cin >> t;
    while(t--){
        cin >> m >> a >> b >> c;
        int seatsInR1 = (m-a<0)?0:(m-a);
        int seatsInR2 = (m-b<0)?0:(m-b);
        int fromA_b = (m-seatsInR1) + (m-seatsInR2);
        int seatedC = ((seatsInR1+seatsInR2)-c<0)?(seatsInR1+seatsInR2):c;
        cout << fromA_b + seatedC << "\n";
        cout << ((m-seatsInR1) + (m-seatsInR2) + (((seatsInR1+seatsInR2)-c<0)?(seatsInR1+seatsInR2):c)) << "\n";
    }
}
