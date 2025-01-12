#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int len=2*n;
        int odd{0},even{0};
        for(int i=0;i<len;i++){
            int temp;
            cin >> temp;
            if(temp%2==0)even++;
            else odd++;
        }
        if(even==odd)cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}
