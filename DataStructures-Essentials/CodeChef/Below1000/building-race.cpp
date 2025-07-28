#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        double a,b,c,d;
        cin >> a >> b >> c >> d;
        double timeChef = a/c;
        double timeChefina = b/d;
        if(timeChef<timeChefina)cout<<"CHEF\n";
        else if(timeChefina < timeChef) cout<<"CHEFINA\n";
        else cout << "BOTH\n";
    }
}
