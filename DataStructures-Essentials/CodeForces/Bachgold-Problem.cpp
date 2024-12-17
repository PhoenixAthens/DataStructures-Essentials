#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    int twos{0};
    int threes{0};
    while(t!=0){
        if(t!=3){
            t-=2;
            twos++;
        }else{
            t-=3;
            threes++;
        }
    }
    cout << (twos+threes) << "\n";
    for(int i=0;i<twos;i++)cout<<2<<" ";
    for(int i=0;i<threes;i++)cout<<3<<" ";
    cout << "\n";
}
