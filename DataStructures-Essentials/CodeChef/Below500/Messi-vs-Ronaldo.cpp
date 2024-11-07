#include "all.h"
int main(){
    int A,B,X,Y;
    cin >> A >> B >> X >> Y;
    int messi = A*2+B;
    int ronaldo = X*2+Y;
    if(messi>ronaldo)cout<<"Messi\n";
    else if(ronaldo>messi)cout<<"Ronaldo\n";
    else cout <<"Equal\n";
    return 0;
}
