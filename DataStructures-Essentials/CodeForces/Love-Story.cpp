#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    char arr[11];
    char cf[10]{'c','o','d','e','f','o','r','c','e','s'};
    while(t--){
        cin >> arr;
        cin.ignore();
        int cnt{0};
        for(int i=0;i<10;i++)if(cf[i]!=arr[i])cnt++;
        cout << cnt << "\n";
    }
}
