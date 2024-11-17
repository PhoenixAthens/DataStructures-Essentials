#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string deck;
        if(n<=15){
            deck = "Lower ";
            if(n<=10){
                deck.append("Double");
            }else{
                deck.append("Single");
            }
        }else{
            deck = "Upper ";
            if(n<=25){
                deck.append("Double");
            }else{
                deck.append("Single");
            }
        }
        cout << deck << "\n";
    }
}
