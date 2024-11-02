#include <iostream>
using std::cout;
using std::cin;
int main(){
    int num;
    while(true){
        cin >> num;
        if(num==42)break;
        cout << num << "\n";
    }
    return 0;
}
