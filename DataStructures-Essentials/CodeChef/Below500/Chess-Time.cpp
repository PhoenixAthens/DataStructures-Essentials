#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int N;
        cin >> N;
        cout << (N*60)/20 << "\n";
        t--;
    }
}
