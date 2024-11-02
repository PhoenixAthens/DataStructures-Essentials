#include <iostream>
using std::cout;
using std::ios;
using std::cin;
using std::min;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    while(t>0){
        int lights;
        cin >> lights;
        int zeroes{0},ones{0};
        for(int i=0;i<2*lights;i++){
            int temp;
            cin >> temp;
            if(temp==1)ones++;
            else zeroes++;
        }
        int maxPairs = min(zeroes,ones);
        int minPairs = lights - zeroes/2 - ones/2;
        cout << minPairs << " " << maxPairs << "\n";
        t--;
    }
}

