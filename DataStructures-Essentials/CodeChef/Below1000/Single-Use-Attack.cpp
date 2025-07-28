#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int h,x,y;
        cin >> h >> x >> y;
        int moves{1};
        h-=y;
        moves+=h/x;
        if(h%x>0)moves++;
        cout<<moves<<"\n";
        
    }
}
