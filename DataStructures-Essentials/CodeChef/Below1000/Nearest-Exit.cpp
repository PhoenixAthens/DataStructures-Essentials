#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int north = x-1;
        int south = 100-x;
        if(north<south)cout<<"LEFT\n";
        else cout<<"RIGHT\n";
    }
}
