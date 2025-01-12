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
    string a;
    string b;
    while(t--){
        int n;
        cin >> n;
        cin >> a;
        cin >> b;
        bool flag = true;
        for(int i=0;i<n;i++){
            if((a[i]=='R' && b[i]!='R')||(b[i]=='R' && a[i]!='R')){
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
