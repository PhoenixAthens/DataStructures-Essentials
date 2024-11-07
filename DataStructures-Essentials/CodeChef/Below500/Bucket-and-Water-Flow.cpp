#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int w,x,y,z;
        cin >> w >> x >> y >> z;
        int bucketAt = w + y*z;
        if(bucketAt > x){
            cout << "overflow\n";
        }else if(bucketAt < x){
            cout << "unfilled\n";
        }else{
            cout << "filled\n";
        }
    }
}
