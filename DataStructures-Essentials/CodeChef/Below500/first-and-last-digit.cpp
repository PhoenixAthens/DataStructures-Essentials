#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int numOfDigits=log10(n);
        cout << n%10+(n/pow(10,numOfDigits)) << "\n";
    }
}
