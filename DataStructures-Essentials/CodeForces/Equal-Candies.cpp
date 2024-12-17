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
        int mi = INT_FAST32_MAX;
        int temp;
        int sum{0};
        for(int i=0;i<n;i++){
            cin >> temp;
            if(temp<mi)mi=temp;
            sum+=temp;
        }
        sum-=(n)*mi;
        cout << sum << "\n";
    }
}
