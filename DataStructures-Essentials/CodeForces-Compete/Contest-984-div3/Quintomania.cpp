#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int n;
    while(t>0) {
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        bool flag = true;
        for(int i=1;i<n;i++) {
            int diff = abs(arr[i]-arr[i-1]);
            if(diff!=5 && diff!=7){
                flag = false;
                break;
            }
        }
        if(flag) cout <<  "Yes\n" ;
        else cout <<  "No\n";
        t--;
    }
}
