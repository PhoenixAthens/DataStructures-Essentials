#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::min;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(((a+b)==c) || ((b+c)==a) || ((c+a)==b) || ((a==b)&&(b==c)))cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
