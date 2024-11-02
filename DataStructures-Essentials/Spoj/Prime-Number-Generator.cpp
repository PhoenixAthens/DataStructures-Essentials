#include <iostream>
#include <math.h>
using std::cout;
using std::ios;
using std::cin;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,upper,lower;
    cin >> t;
    while(t>0){
        cin >> lower >> upper;
        while(lower<=upper){
            if(lower==1){
                lower++;
                continue;
            }
            int sq = sqrt(lower);
            bool flag=true;
            for(int i=2;i<=sq;i++){
                if(lower%i==0){
                    flag=false;
                    break;
                }
            }
            if(flag)cout<<lower<<"\n";
            lower++;
        }
        cout<<"\n";
        t--;
    }
}

