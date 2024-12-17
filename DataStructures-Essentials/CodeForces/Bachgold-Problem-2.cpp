#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int n;
    cin >> n;
    if(n%2==0){
        int ans = n/2;
        cout << ans << "\n";
        for(int i=0;i<ans;i++)cout<<2<<" ";
        cout<<"\n";
    }else{
        int ans = (n-1)/2;
        cout << ans << "\n";
        for(int i=0;i<ans-1;i++)cout<<2<<" ";
        cout << 3 << "\n";
    }
}
