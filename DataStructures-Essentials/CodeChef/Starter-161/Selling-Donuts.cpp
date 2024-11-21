#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,m;
    while(t--){
        cin >> n >> m;
        int arr[n];
        int diss{0};
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<m;i++){
            int temp;
            cin >> temp;
            temp-=1;
            if(arr[temp]==0)diss++;
            else arr[temp]--;
        }
        cout << diss << "\n";
    }
    

}
