#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n%m==0){
            if((n/m)%2==0)cout<<"Yes\n";
            else cout<<"No\n";
        }else{
            cout << "No\n";
        }
    }
}
