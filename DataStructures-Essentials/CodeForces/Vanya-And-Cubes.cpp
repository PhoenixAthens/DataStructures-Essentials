#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int n;
    cin >> n;
    int total=0;
    int i=1;
    for(;;i++){
        total+=i;
        if(total>n){
            break;
        }
        n-=total;
    }
    cout << i-1 << "\n";
}
