#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    if(n%2==0){
        cout << 4 << " " << n-4;
    }else{
        cout << 9 << " " << n-9;
    }
}
