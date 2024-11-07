#include "all.h"
int main(){
    int p1,p2,p3,p4;
    cin >> p1 >> p2 >> p3 >> p4;
    int cnt=0;
    if(p1>=10)cnt++;
    if(p2>=10)cnt++;
    if(p3>=10)cnt++;
    if(p4>=10)cnt++;
    cout << cnt << "\n";
}
