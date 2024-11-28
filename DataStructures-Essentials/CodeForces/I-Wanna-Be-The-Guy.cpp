#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int quant;
    cin >> quant;
    int temp;
    while(quant--){
        cin >> temp;
        arr[temp-1]=1;
    }
    cin >> quant;
    while(quant--){
        cin >> temp;
        arr[temp-1]=1;
    }
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i]!=1){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
}
