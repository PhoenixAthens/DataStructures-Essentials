#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    int a,b;
    cin >> n;
    int scoreM{0},scoreC{0};
    while(n--){
        cin >> a >> b;
        if(a>b)scoreM++;
        else if(b>a)scoreC++;
    }
    if(scoreM>scoreC)cout<<"Mishka\n";
    else if(scoreC>scoreM)cout<<"Chris\n";
    else cout<<"Friendship is magic!^^\n";
}
