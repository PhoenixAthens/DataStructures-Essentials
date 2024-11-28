#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,x;
    cin >> t;
    while(t--){
        cin >> x;
        int coins{0};
        coins+=x/10;
        x-=10*(x/10);
        coins+=x/5;
        x-=5*(x/5);
        if(x>0)cout<<-1<<"\n";
        else cout<<coins<<"\n";
    }
}
