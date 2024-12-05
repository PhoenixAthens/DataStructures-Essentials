#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)cin >> arr[i];
        if((arr[1]==arr[2])&&(arr[0]!=arr[1]))cout<<1<<"\n";
        else{
            for(int i=1;i<n;i++)
                if(arr[i]!=arr[i-1]){
                    cout<<i+1<<"\n";
                    break;
                }
            
        }
    }
}
