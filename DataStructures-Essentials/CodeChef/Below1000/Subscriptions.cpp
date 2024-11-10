#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int numOfGroups{0};
        if(n%6==0){
            numOfGroups+=(n/6);
        }else{
            numOfGroups+=(n/6)+1;
        }
        cout << numOfGroups*x << "\n";
    }
}
