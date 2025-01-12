#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n;
    cin >> t;
    string s;
    while(t--){
        cin >> n;
        cin >> s;
        int l=0,r=s.size()-1;
        while(s[l]!=s[r] && l<=r){
            l++;
            r--;
        }
        cout<<(r+1-l)<<"\n";
        
    }
}
//IUBH-10523926
