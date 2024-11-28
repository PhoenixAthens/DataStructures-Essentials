#include <iostream>
using std::cout;
using std::cin;
int main(){
    long long n;
    cin >> n;
    if(n%2==0){
        cout << ((n-1)-(n-2)/2) << "\n";
    }else{
        cout << ((-n-1)+(n-1)-(n-3)/2) << "\n";
    }
}
