#include <iostream>
#include <cmath>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,x;
    cin >> t;
    int sum[5]{0,1,3,6,10};
    while(t--){
        cin >> x;
        int numsDialed = ((x%10)-1)*4+(log10(x)+1);
        cout << ((numsDialed/4)*10)+sum[(numsDialed%4)] << "\n";
    }
}
