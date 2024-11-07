#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int sum{0};
        while(N!=0){
            sum+=N%10;
            N/=10;
        }
        cout<<sum<<"\n";
    }
}
