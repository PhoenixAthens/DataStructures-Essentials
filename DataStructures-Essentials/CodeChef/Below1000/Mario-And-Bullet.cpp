#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int div = y/x;
        if(div>z) cout<<1<<"\n";
        else cout << z-(y/x) << "\n";
    }
}
