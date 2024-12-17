#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::min;
using std::max;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n,temp;
    cin >> t;
    int minElem,maxElem;
    while(t--){
        cin >> n;
        minElem=INT_FAST32_MAX;
        maxElem=INT_FAST32_MIN;
        while(n--){
            cin >> temp;
            minElem = min(minElem, temp);
            maxElem = max(maxElem, temp);
        }
        cout<<maxElem-minElem<<"\n";
    }
}
