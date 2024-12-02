#include <iostream>
using std::cout;
using std::cin;
int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int kills{0};
    for(int i=1;i<=d;i++)if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)kills++;
    cout << d-kills << "\n";
}
