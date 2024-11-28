#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int A,B,X,Y;
    while(t--){
        cin >> A >> B >> X >> Y;
        if(A==B)cout<<"YES\n";
        else if(A>B){
            if(Y>=(A-B)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            if(X>=(B-A)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}
