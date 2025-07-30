#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        double n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;
        double pCost = (n*x)/a;
        double dCost = (n*y)/b;
        if(pCost < dCost)cout<<"PETROL\n";
        else if(dCost < pCost) cout<<"DIESEL\n";
        else cout<<"ANY\n";
    }
}
