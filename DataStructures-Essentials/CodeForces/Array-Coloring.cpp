#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n,temp;
    cin >> t;
    while(t--){
        cin >> n;
        int sum1{0};
        int sum2{0};
        int i=0;
        for(;i<n/2;i++){
            cin >> temp;
            sum1+=temp;
        }
        for(;i<n;i++){
            cin >> temp;
            sum2+=temp;
        }
        if(sum1%2==sum2%2)cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}
