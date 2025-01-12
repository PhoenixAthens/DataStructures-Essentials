#include <iostream>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::sort;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr,arr+3);
        int eq = (arr[2]-arr[0])+(arr[2]-arr[1]);
        if(n-eq<0 || (n-eq)%3!=0)cout<<"NO\n";
        else cout<<"YES\n";
        
    }
}
