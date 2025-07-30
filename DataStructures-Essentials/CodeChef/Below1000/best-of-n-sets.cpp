#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a>b){
            int maxMatches = a*2-1;
            while((maxMatches-(a+b)+b) > a)maxMatches-=2;
            cout << maxMatches <<"\n";
        }else{
            int maxMatches = b*2-1;
            while((maxMatches-(b+a)+a) > b)maxMatches-=2;
            cout << maxMatches << "\n";
        }
    }
}
