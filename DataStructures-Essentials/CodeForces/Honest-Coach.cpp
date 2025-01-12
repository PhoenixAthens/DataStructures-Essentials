#include <iostream>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::sort;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int ms{INT_FAST16_MAX};
        for(int i=n-1;i>=1;i--){
            if((arr[i]-arr[i-1])<ms)ms=(arr[i]-arr[i-1]);
        }
        cout<<ms<<"\n";
    }
    
}
