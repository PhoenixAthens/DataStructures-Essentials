#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::unordered_set;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        bool flag=true;
        unordered_set<int> u_set;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(u_set.find(arr[i])!=u_set.end()){
                flag=false;
            }
            u_set.insert(arr[i]);
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
