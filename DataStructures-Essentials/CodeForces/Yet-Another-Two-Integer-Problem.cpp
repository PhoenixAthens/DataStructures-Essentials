#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int val;
        if(a>b){
            val  = (a-b)/10;
            if((a-b)%10==0)cout<<val<<"\n";
            else cout << val+1 <<"\n";
        }else if(b>a){
            val  = (b-a)/10;
            if((b-a)%10==0)cout<<val<<"\n";
            else cout << val+1 <<"\n";
        }else{
            cout << 0 << "\n";
        }
    }
}
