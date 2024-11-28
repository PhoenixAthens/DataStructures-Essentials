#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int index=a/b;
        while(b*index<a){
            index++;
        }
        cout<<b*index-a<<"\n";
    }
}
