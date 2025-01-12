#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    cin >> a >> b;
    cout << (a*a+b*b+2*a*b) << "\n";
}
