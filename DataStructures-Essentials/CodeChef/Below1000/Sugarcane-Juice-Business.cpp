#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        double n;
        cin >> n;
        double totalcoins = 50*n;
        double buying_sugarcane = totalcoins*0.2;
        double buying_ingredients = totalcoins*0.2;
        double rent = totalcoins*0.3;
        cout << (int)(totalcoins - buying_sugarcane - buying_ingredients - rent) << "\n";
    }
}
