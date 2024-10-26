#include "all.h"
int main(){
    int t;
    cin >> t;
    int arr[3];
    while(t>0){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(begin(arr),end(arr));
        cout << arr[1] << "\n";
        t--;
    }
    return 0;
}
