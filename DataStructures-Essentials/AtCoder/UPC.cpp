#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    string make{s[0],'U','P','C'};
    cout << make << "\n";
}

