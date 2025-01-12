#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n,a[3];
    cin >> t;
    while(t--){
        cin >> n >> a[0] >> a[1] >> a[2];
        int total{0};
        int steps{0};
        while(total<n){
            for(int i=0;i<3 && total<n;i++){
                total+=a[i];
                steps++;
            }
        }
        cout<<steps<<"\n";
    }
}
