#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    string s;
    size_t s_size;
    while(t--){
        cin >> s;
        s_size = s.size();
        if(s_size%2==1){
            cout<<"NO\n";
        }else{
            bool flag=true;
            for(size_t i=0,j=s_size/2;j<s_size;i++,j++){
                if(s[i]!=s[j]){
                    flag=false;
                    break;
                }
            }
            if(flag)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
