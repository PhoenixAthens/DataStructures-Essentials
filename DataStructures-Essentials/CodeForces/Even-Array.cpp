#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int even = (n%2==0)?n/2:(n/2)+1;
        int even_av{0};
        int at_wrong{0};
        int num;
        for(int i=0;i<n;i++){
            cin >> num;
            if(num%2==0)even_av++;
            if(i%2==1 && num%2==0)at_wrong++;
        }
        if(even_av!=even)cout<<-1<<"\n";
        else cout<<at_wrong<<"\n";
        
    }
}
