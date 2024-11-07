#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int totalCostOfDisposableMasks = x*100;
        int totalCostOfClothMasks = y*10;
        if(totalCostOfClothMasks < totalCostOfDisposableMasks){
            cout << "CLOTH\n";
        }else if(totalCostOfDisposableMasks < totalCostOfClothMasks){
            cout << "DISPOSABLE\n";
        }else{
            cout << "CLOTH\n";
        }
    }

}
