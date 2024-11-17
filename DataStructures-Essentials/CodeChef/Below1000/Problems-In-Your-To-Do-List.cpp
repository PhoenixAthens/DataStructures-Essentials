#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp;
        int remove{0};
        for(int i=0;i<n;i++){
            cin >> temp;
            if(temp>=1000)remove++;
        }
        cout << remove << "\n";
    }
}
