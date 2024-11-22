#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    double arr[n];
    int index = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>arr[index])index=i;
    }
    double sum{0};
    for(int i=0;i<n;i++)sum+=(arr[i]/arr[index])*100;
    cout << sum/n << "\n";
}
