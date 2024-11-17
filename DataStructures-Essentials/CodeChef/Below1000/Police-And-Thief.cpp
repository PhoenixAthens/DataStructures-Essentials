#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int time = 0;
        while(x>y){
            y++;
            time++;
        }
        while(x!=y){
            x+=2;
            y+=1;
            time++;
        }
        cout << time << "\n";
    }
}
