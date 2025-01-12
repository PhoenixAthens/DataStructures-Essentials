#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x;
    cin >> x;
    int sum{2025};
    for(int i=1;i<=9;i++)for(int j=1;j<=9;j++)if((i*j)==x)sum-=x;
    cout << sum << "\n";
}

