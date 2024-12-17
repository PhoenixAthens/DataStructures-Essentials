#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::string;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n;
    cin >> t;
    string s;
    while(t--){
        int characters[26]{0};
        cin >> n;
        cin >> s;
        int i=0;
        for(;i<n;){
            if(characters[s[i]-'A']==0){
                characters[s[i]-'A']++;
                int j=i+1;
                while(s[j]==s[i]){
                    characters[s[j]-'A']++;
                    j++;
                }
                i=j;
            }else{
                break;
            }
        }
        if(i>=n)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
