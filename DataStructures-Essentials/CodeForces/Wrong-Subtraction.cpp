#include <iostream>
using std::cout;
using std::cin;
int main(){
    int num, k;
    cin >> num >> k;
    while(k--){
        if(num%10>0){
            num-=1;
        }else{
            num/=10;
        }
    }
    cout<<num<<"\n";
}
