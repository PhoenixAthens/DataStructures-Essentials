#include <iostream>
#include <format>
#include <vector>
using std::cout;
using std::format;
using std::vector;
using std::endl;
int main(int argc, char** argv){
    int arr[] = {6,4,7,-3,2,8};
    int n = sizeof(arr)/sizeof(int);
    vector<int> pref(n + 1);
    vector<int> suff(n + 1);
    for(int i = 1;i<=n;i++){
        pref[i] = pref[i-1]+arr[i-1];
    }
    for(int i=n-1;i>=0;i--){
        suff[i] = suff[i+1] + arr[i];
    }
    for(int i = 0;i<n+1;i++){
        cout<<pref[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<n+1;i++){
        cout<<suff[i]<<" ";
    }
    cout<<endl;
    //0 6 10 17 14 16 24
    //24 18 14 7 10 8 0 
}
