#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int maxLen{1};
    int len=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            len++;
        }else{
            if(len>maxLen)maxLen=len;
            len=1;
        }
    }
    if(len>maxLen)maxLen=len;
    cout<<maxLen<<"\n";
}
