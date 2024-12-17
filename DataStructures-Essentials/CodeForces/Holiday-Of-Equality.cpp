#include <iostream>
using std::cout;
using std::cin;
using std::max;
int main(){
    int n;
    cin >> n;
    int maxVal{INT_MIN};
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
        maxVal = max(maxVal,arr[i]);
    }
    int result{0};
    for(int i:arr){
        result+=maxVal-i;
    }
    cout << result << "\n";
}
