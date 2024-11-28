#include <iostream>
using std::cout;
using std::cin;
int main(){
    double k,n,w;
    cin >> k >> n >> w;
    double sum = k*(w/2*(2+w-1));
    if(sum>=n)cout<<(int)(sum-n)<<"\n";
    else cout<<0<<"\n";
    
}
