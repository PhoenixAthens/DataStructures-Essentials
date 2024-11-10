#include "../Below500/all.h"
int main(){
    int n;
    cin >> n;
    int evenWeapons{0};
    int oddWeapons{0};
    while(n>0){
        int temp;
        cin >> temp;
        if(temp%2==0)evenWeapons++;
        else oddWeapons++;
        n--;
    }
    if(evenWeapons>oddWeapons)cout<<"READY FOR BATTLE\n";
    else cout<<"NOT READY\n";
}
