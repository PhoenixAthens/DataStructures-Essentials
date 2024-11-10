#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int bottles[3];
        cin >> bottles[0] >> bottles[1] >> bottles[2];
        int emptyB{0};
        for(int i: bottles){
            if(i==0)emptyB++;
        }
        if(emptyB>=2)cout<<"Water filling time\n";
        else cout<<"Not now\n";
    }
}
