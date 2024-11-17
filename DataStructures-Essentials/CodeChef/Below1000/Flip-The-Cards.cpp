#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    int n,x;
    while(t--){
        cin >> n >> x;
        int face_up = x;
        int face_down = n-x;
        cout << min(face_up,face_down) << "\n";
    }
    return 0;
}
