#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int arr[14]{0};
    for(int i=0;i<4;i++){
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    int count{0};
    for(int i:arr)if(i>=1)count++;
    if(count==2) cout<<"Yes\n";
    else cout<<"No\n";
}

