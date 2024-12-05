#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,d;
    cin >> t;
    while(t--){
        cin >> d;
        int a = 1;
        int up = 2;
        int happy{0};
        int prev{0};
        int temp;
        int i=1;
        for(int cn=1;cn<=d;cn++){
            cin >> temp;
            int score_s = i==1?1:8*(i-1);
            if(prev+temp>=score_s){
                if((prev+temp)==score_s){
                    happy++;
                    i++;
                    prev=0;
                }else if((prev+temp)%8==0 && (prev+temp)/8>i){
                    i=((prev+temp)/8)+2;
                    happy++;
                    prev=0;
                }else{
                    if((prev+temp)/8>i){
                        i=((prev+temp)/8)+2;
                    }else{
                        i+=((prev+temp)/8);
                    }
                    prev=prev+temp-(8*(i-1));
                }
            }else{
                prev += temp;
            }
        }
        cout << happy << "\n";
    }
}
