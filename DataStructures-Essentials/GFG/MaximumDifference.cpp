#include <iostream>
using std::cout;
using std::max;
int maxDiff(int arr[], int size_arr){
    int maxSoFar = arr[size_arr-1];
    int maxDiff = INT_MIN;
    for(int i = size_arr-2;i>=0;i--){
        maxDiff = max(maxDiff,maxSoFar-arr[i]);
        maxSoFar = max(maxSoFar, arr[i]);
        
    }
    return maxDiff;
}
int main(int argc, char** argv){
    int arr[] = {1, 2, 90, 10, 110};
    int n = 5;
    cout << maxDiff(arr,n)<<"\n";
    
    int arr2[] = {80, 2, 6, 3, 100};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << maxDiff(arr2,n2)<<"\n";
}
