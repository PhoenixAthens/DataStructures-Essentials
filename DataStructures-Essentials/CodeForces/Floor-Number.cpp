#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a<=2)cout<<"1\n";
        else{
            int floors = 1;
            a-=2;
            if(a%b==0)floors+=a/b;
            else floors+=a/b+1;
            cout << floors << "\n";
        }
    }
}
