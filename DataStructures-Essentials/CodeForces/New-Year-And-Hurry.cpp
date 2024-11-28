#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n,k;
    cin >> n >> k;
    int minutes = 4*60 - k;
    int index=1;
    while(minutes!=0 && index<=n){
        if(minutes<5*index){
            break;
        }
        minutes-=5*index;
        index++;
    }
    cout << index-1 << "\n";
}
