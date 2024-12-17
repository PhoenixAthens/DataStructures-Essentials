#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int n,m;
    cin >> n >> m;
    char ch;
    bool flag=true;
    for(int i=0;i<n*m;i++){
        cin >> ch;
        if(ch=='C'||ch=='M'||ch=='Y'){
            cout<<"#Color\n";
            return 0;
        }
    }
    cout<<"#Black&White\n";
    return 0;
}
