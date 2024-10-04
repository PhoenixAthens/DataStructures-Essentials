#include <iostream>
using std::cout;
using std::cin;
using std::ios;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

int main(int argc, char** argv){
    int testCases{0}, kmTravelled{0};
    cin >> testCases;
    while(testCases>0){
        cin >> kmTravelled;
        if(kmTravelled <= 300){
            cout << 3000 << "\n";
        }else{
            cout << kmTravelled*10 << "\n";
        }
        testCases--;
    }
    return 0;
}
