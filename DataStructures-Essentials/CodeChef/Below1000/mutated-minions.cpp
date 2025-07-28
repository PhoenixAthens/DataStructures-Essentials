#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        int count{0};
        cin >> n >> k;
        while(n--){
            int temp;
            cin >> temp;
            if((temp+k)%7==0)count++;
        }
        cout<<count<<"\n";
    }
}
