#include <iostream>
using std::cout;
using std::cin;
using std::ios;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        int x = 0;
        int i = 1;
        while( x >= (-n) && x <= n ){
            if(i%2==0){
                x-=(2*i-1);
            }else{
                x+=(2*i-1);
            }
            i++;
        }
        i-=1;
        if(i%2!=0){
            cout << "Sakurako" << "\n";
        }else{
            cout << "Kosuke" << "\n";
        }
        t--;
    }
}
