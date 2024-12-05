#include <iostream>
using std::cout;
using std::cin;
int main(){
    int k,r;
    cin >> k >> r;
    for(int i=1;;i++){
        if((k*i)%10 == r || (k*i)%10==0){
            cout << i << "\n";
            break;
        }
    }
}
