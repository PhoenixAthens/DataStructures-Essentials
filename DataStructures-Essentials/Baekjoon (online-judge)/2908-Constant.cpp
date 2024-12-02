#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int a,b;
    cin >> a >> b;
    bool flag=true;
    int result{0};
    int revA{0};
    int revB{0};
    while(a!=0 && b!=0){
        if(a%10 != b%10){
            if(a%10>b%10)result=1;
            else result=2;
            break;
        }
        revA+=a%10;
        revA*=10;
        revB+=b%10;
        revB*=10;
        a/=10;b/=10;
    }
    if(result==1){
        while(a!=0){
            revA+=a%10;
            revA*=10;
            a/=10;
        }
        
        revA/=10;
        cout << revA << "\n";
    }else{
        while(b!=0){
            revB+=b%10;
            revB*=10;
            b/=10;
        }
        revB/=10;
        cout << revB << "\n";
    }
}
