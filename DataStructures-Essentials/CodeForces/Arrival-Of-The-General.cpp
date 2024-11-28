#include <iostream>
using std::cout;
using std::cin;
using std::swap;
using std::max;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp;
    }
    int minElemIndex=0;
    int steps{0};
    for(int i=n-1;i>=1;i--){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
            steps++;
        }
    }
    for(int i=1;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            swap(arr[i+1],arr[i]);
            steps++;
        }
    }
    cout << steps << "\n";
}
