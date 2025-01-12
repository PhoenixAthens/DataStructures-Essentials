#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    string s;
    cin >> s;
    int sizeO = s.size();
    int i=0;
    int count{0};
    for(;i<sizeO-1;i++){
        if(s[i]=='0' && s[i+1]=='0'){
            count++;
            i++;
        }else{
            count++;
        }
    }
    if(i==sizeO)cout<<count<<"\n";
    else cout<<(count+1)<<"\n";
}
