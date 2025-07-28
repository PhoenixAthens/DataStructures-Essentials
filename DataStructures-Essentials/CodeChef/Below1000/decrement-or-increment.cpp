#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    if(n%4==0)cout<<++n<<"\n";
    else cout<<--n<<"\n";
}
