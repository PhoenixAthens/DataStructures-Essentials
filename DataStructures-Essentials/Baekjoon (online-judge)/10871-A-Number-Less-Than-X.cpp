#include <iostream>
using std::cout;
using std::cin;
int main(){
    int len, up;
    cin >> len >> up;
    for(int i=0;i<len;i++){
        int temp;
        cin >> temp;
        if(temp<up)cout<<temp<<" ";
    }
    cout << "\n";
}
