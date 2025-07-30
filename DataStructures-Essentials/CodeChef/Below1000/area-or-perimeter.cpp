#include <iostream>
using std::cout;
using std::cin;
int main(){
    int l,b;
    cin >> l;
    cin >> b;
    int peri = 2*(l+b);
    int area = l*b;
    if(area>peri){
        cout<<"Area\n";
        cout<<area<<"\n";
    }else if(peri>area){
        cout<<"Peri\n";
        cout<<peri<<"\n";
    }else{
        cout<<"Eq\n";
        cout<<area<<"\n";
    }
}
