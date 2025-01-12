#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::min;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int maxVal{0};
        int mc[n],sc[n];
        for(int i=0;i<n;i++)cin>>mc[i];
        for(int i=0;i<n;i++)cin>>sc[i];
        if(n==1)cout<<mc[0]<<"\n";
        else{
            for(int i=0;i<n-1;i++){
                int val = maxVal+(mc[i]-sc[i+1]);
                if(val>maxVal){
                    maxVal = val;
                }
            }
            maxVal+=mc[n-1];
            cout << maxVal << "\n";
        }
    }
}
