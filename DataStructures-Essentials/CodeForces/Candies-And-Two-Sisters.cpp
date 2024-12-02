#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2==0)cout<<n/2-1<<"\n";
        else cout<<n/2<<"\n";
    }
}
