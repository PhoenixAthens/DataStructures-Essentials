#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=4)cout << -1 << "\n";
        else{
            for(int i=2;i<=n;i+=2){
                if(i!=4)cout<<i<<" ";
            }
            cout << 4 << "\n";
            cout << 5 << "\n";
            for(int i=1;i<=n;i+=2){
                if(i!=5)cout<<i<<" ";
            }
        }
    }
}
