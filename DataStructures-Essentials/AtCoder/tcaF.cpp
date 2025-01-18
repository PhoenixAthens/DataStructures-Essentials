#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long input;
    cin >> input;
    long fact = 2;
    long numTo = 3;
    while(fact!=input){
        fact*=numTo;
        numTo++;
    }
    cout << (numTo-1) << "\n";
}

