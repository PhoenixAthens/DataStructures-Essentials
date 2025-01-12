#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int maxB{0};
        for(int i=0;i<n;i++){
            int tempC{0};
            if(arr[i]==0){
                tempC++;
                i++;
                while(arr[i]==0 && i<n){
                    tempC++;
                    i++;
                }
                if(tempC>maxB)maxB=tempC;
            }
        }
        cout << maxB << "\n";
    }
    
}
