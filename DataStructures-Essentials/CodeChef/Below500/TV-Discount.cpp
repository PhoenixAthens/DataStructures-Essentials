#include "all.h"
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a-c < b-d){
            cout<<"FIRST\n";
        }else if(b-d < a-c){
            cout<<"SECOND\n";
        }else{
            cout << "ANY\n";
        }
    }
}
