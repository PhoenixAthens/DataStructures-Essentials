#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int K,X;
        cin >> K >> X;
        cout << K*7-X << "\n";
        t--;
    }
}
