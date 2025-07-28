#include <iostream>
using std::cout;
using std::cin;
int main(){
    long n,k;
    cin >> n >> k;
    if(n%2==0){
        if(k<=n/2){
            cout << (2*k-1) << "\n";
        }else{
            k-=n/2;
            cout << (2*k) << "\n";
        }
    }else{
        if(k<=(n+1)/2){
            cout << (2*k-1) << "\n";
        }else{
            k-=(n+1)/2;
            cout << (2*k) << "\n";
        }
    }
}

void alternate(){
    long long n,k;
    cin >> n >> k;
    if(k<=(n+1)/2){
        cout << (2*k-1) << "\n";
    }else{
        k-=(n+1)/2;
        cout << (2*k) << "\n";
    }
}
