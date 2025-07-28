#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::vector;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    if(s.size()<7){
        cout<<"NO\n";
        return 0;
    }
    int sum{0};
    int i=0;
    for(;i<7;i++){
        if(s[i]=='1')sum+=1;
    }
    if(sum==7||sum==0){
        cout<<"YES\n";
        return 0;
    }
    for(;i<s.size();i++){
        if(s[i]=='1')sum+=1;
        if(s[i-7]=='1')sum-=1;
        if(sum==7||sum==0){
            cout<<"YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
