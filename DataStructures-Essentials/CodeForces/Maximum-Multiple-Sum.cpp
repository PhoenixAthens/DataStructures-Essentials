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
        if(n==3)cout<<3<<"\n";
        else cout<<2<<"\n";
    }
//    int arr[11]{0};
//    for(int i=2;i<5;i++){
//        for(int j=2;j<10;j++){
//            if(i%j==0)arr[j]+=i;
//        }
//    }
//    for(int i: arr)cout<<i<<" ";
//    cout<<"\n";

}
