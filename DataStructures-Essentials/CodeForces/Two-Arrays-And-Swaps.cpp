#include <iostream>
#include <algorithm>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::vector;
using std::sort;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        int sum{0};
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        if(k==0)cout<<sum<<"\n";
        else{
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int i=0;
            sum=0;
            while(k-- && b[n-i-1]>=a[i]){
                sum+=b[n-i-1];
                i++;
            }
            for(;i<n;i++)sum+=a[i];
            cout << sum << "\n";
        }
    }
}
