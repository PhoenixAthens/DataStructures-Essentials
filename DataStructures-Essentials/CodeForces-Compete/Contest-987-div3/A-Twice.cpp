#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)arr[i]=0;
        int cnt{0};
        for(int i=0;i<n;i++){
            int ind;
            cin >> ind;
            arr[ind-1]++;
        }
        for(int i=0;i<n;i++){
            cnt+=arr[i]/2;
        }
        cout << cnt << "\n";
    }
}
