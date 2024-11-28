#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    int num{0};
    for(char c:s){
        if(c=='4' || c=='7')num++;
    }
    if(num==0)cout<<"NO\n";
    else{
        bool flag = true;
        while(num!=0){
            if(num%10!=4 && num%10!=7){
                flag=false;
                break;
            }
            num/=10;
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
