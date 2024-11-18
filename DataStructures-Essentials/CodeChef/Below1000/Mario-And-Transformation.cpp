#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int val = (x%3);
        if(val==2){
            cout << "SMALL\n";
        }else if(val==1){
            cout << "HUGE\n";
        }else{
            cout << "NORMAL\n";
        }
    }
}
