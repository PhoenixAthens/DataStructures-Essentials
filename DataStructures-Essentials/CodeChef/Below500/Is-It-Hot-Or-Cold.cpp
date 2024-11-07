#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int temp;
        cin >> temp;
        if(temp>20){
            cout << "HOT\n";
        }else{
            cout << "COLD\n";
        }
        t--;
    }
}
