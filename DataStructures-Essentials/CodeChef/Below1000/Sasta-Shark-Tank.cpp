#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        double A,B;
        cin >> A >> B;
        //let evaluation be x, x = offer * 100 / share
        double eval1 = A*10;
        double eval2 = B*5;
        if(eval1>eval2){
            cout<<"FIRST\n";
        }else if(eval2>eval1){
            cout<<"SECOND\n";
        }else{
            cout<<"ANY\n";
        }
    }
    return 0;
}
