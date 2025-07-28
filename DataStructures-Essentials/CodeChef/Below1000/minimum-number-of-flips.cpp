#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int neg{0},pos{0};
        int temp;
        while(n--){
            cin >> temp;
            if(temp==-1)neg++;
            else pos++;
        }
        if((neg%2==0 && pos%2==0) || (neg%2!=0 && pos%2!=0)){
            cout << (abs(neg-pos)/2) << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
}
