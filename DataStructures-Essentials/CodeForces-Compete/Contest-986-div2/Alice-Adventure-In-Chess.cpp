#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::max;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        string movement;
        cin >> movement;
        int x{0}, y{0};
        int maxI = max(a,b);
        bool flag = true;
        for(int i=0;i<maxI;i++){
            for(char c: movement){
                if(c=='N'){
                    y++;
                }else if(c=='E'){
                    x++;
                }else if(c=='S'){
                    y--;
                }else{
                    x--;
                }
                if(x==a && y==b){
                    cout << "YES\n";
                    flag = false;
                    break;
                }
            }
            if(flag==false)break;
            
        }
        if(flag)cout<<"NO\n";
    }
}
