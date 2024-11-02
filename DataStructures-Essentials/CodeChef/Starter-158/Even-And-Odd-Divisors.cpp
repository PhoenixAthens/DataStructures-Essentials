#include <iostream>
using std::cout;
using std::cin;

int main(){
    int t,N;
    cin >> t;
    while(t>0){
        cin >> N;
        int even = N%2==0?1:0;
        int odd = 1;
        int sq = N/2;
        for(int i=2;i<=sq;i++){
            if(N%i==0){
                if(i%2==0)even++;
                else odd++;
            }
        }
        if(even>odd)cout<<1<<"\n";
        else if(odd==even)cout<<0<<"\n";
        else cout<<-1<<"\n";
        t--;
    }
}
