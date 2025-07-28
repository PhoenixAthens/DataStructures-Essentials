#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    cout << (n-k)*10000 << "\n";
    return 0;
}
