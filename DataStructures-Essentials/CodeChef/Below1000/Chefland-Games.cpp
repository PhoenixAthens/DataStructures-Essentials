#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int r[4];
        cin >> r[0] >> r[1] >> r[2] >> r[3];
        bool flag = true;
        for(int i: r){
            if(i==1){
                cout<<"OUT\n";
                flag = false;
                break;
                
            }
        }
        if(flag)cout<<"IN\n";
    }
}
