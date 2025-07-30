#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if((a-b-c-d-e)>=0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
