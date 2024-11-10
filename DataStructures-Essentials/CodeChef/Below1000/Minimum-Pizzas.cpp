#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int totalSlices = n*x;
        if(totalSlices%4==0)cout<<totalSlices/4<<"\n";
        else cout << (totalSlices/4)+1 << "\n";
    }
}
