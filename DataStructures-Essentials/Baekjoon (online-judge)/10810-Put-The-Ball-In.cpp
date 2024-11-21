#include <iostream>
using std::cin;
using std::cout;
int main(){
    int baskets,balls;
    cin >> baskets >> balls;
    int arr[baskets];
    for(int i=0;i<baskets;i++)arr[i]=0;
    for(int a=0;a<balls;a++){
        int i,j,k;
        cin >> i >> j >> k;
        for(int b=i-1;b<j;b++){
            arr[b]=k;
        }
    }
    for(int i:arr)cout<<i<<" ";
    cout<<"\n";
}
