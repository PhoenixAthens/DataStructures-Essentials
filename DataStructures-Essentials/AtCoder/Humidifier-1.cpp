#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int water_in_humidifier{0};
    int time_used{0};
    int time,water;
    while(n--){
        cin >> time >> water;
        int val_sub = time - time_used;
        if(water_in_humidifier!=0){
            if(val_sub>water_in_humidifier){
                water_in_humidifier=0;
                water_in_humidifier=water;
            }
            else water_in_humidifier += (water-val_sub);
        }else{
            water_in_humidifier+=water;
        }
        time_used = time;
    }
    cout << water_in_humidifier << "\n";
}
