#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--)cout<<" ";
        int calc = 1+(i-1)*2;
        for(int j=1;j<=calc;j++)cout<<"*";
        cout<<"\n";
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<n-i;j++)cout<<" ";
        int calc = 1+(i-1)*2;
        for(int j=1;j<=calc;j++)cout<<"*";
        cout<<"\n";
    }
    
}
