#include <iostream>
using std::cout;
using std::cin;
using std::ios;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int tc;
    cin >> tc;
    int len_A, len_B;
    std::string A, B;
    while(tc>0){
        cin >> len_A >> len_B;
        cin >> A;
        cin >> B;
        int arr[26]{0};
        for(char c: A){
            arr[c-'a']++;
        }
        for(char c: B){
            arr[c-'a']++;
        }
        int cnt{0};
        for(int i:arr){
            if(i==0)cnt++;
        }
        if(cnt==0)cout<<"NO\n";
        else cout<<"YES\n";
        tc--;
    }
}
