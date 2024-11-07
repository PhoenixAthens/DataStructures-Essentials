#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int H,K;
        cin >> H >> K;
        int total{0};
        while(H!=1){
            bool prime=true;
            int sq = sqrt(H);
            for(int i=2;i<=sq;i++){
                if(H%i==0){
                    prime=false;
                    break;
                }
            }
            if(prime){
                total+=1;
                H=1;
            }else{
                for(int i=H/2;i>0;i--){
                    if(H%i==0){
                        H=i;
                        total+=1;
                        break;
                    }
                }
            }
        }
        while(K!=1){
            bool prime=true;
            int sq = sqrt(K);
            for(int i=2;i<=sq;i++){
                if(K%i==0){
                    prime=false;
                    break;
                }
            }
            if(prime){
                total+=1;
                K=1;
            }else{
                for(int i=K/2;i>0;i--){
                    if(K%i==0){
                        K=i;
                        total+=1;
                        break;
                    }
                }
            }
        }
        cout << total << "\n";
        
        t--;
    }
}
