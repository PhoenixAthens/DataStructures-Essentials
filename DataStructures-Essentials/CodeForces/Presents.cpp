#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int index{1};
    while(n--){
        int temp;
        cin >> temp;
        arr[temp-1]=index++;
    }
    for(int i:arr)cout<<i<<" ";
    cout<<"\n";
}
