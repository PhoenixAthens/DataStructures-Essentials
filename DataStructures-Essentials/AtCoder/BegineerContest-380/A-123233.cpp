#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    int arr[3]{0,0,0};
    cin >> n;
    while(n!=0){
        if(n%10==1){
            arr[0]++;
        }else if(n%10==2){
            arr[1]++;
        }else if(n%10==3){
            arr[2]++;
        }
        n/=10;
    }
    if(arr[0]==1 && arr[1]==2 && arr[2]==3)cout<<"Yes\n";
    else cout<<"No\n";
}
