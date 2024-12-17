#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,n,temp;
    cin >> t;
    while(t--){
        cin >> n;
        int ones{0};
        int twos{0};
        for(int i=0;i<n;i++){
            cin >> temp;
            if(temp==2)twos++;
            else ones++;
        }
        if(ones==0 || twos==0){
            cout << ((n%2==0)?"YES\n":"NO\n");
        }else{
            cout << (((ones+twos*2)%2==0)?"YES\n":"NO\n");
        }
    }
    
}
