#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    bool flag=true;
    while(n--){
        int temp;
        cin >> temp;
        if(temp==1){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"EASY\n";
    else cout<<"HARD\n";
}
