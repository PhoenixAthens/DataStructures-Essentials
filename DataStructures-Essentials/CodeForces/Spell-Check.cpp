#include <iostream>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::string;
using std::cin;
using std::sort;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int Solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n>5)return 0;
    sort(s.begin(),s.end());
    return s=="Timru";
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cout << (Solve()==0?"NO":"YES") << "\n";
    }
    
}
