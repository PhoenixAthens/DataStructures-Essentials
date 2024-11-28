#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a{0};
    int d{0};
    for(char c: s){
        if(c=='A')a++;
        else d++;
    }
    if(a>d){
        cout<<"Anton\n";
    }else if(d>a){
        cout<<"Danik\n";
    }else{
        cout<<"Friendship\n";
    }
}
