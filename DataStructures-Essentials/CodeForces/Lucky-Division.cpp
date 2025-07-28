#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::vector;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num;
    cin >> num;
    int num_copy = num;
    while(num_copy!=0){
        if(num_copy%10!=4 && num_copy%10!=7)break;
        num_copy/=10;
    }
    if(num_copy==0 || num%4==0 || num%7==0 || num%47==0 || num%74==0 )cout<<"YES\n";
    else{
        cout<<"NO\n";
    }
}
