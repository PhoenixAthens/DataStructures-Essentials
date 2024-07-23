#include <iostream>
using std::cout;
using std::max;

int kadane(int* nums, int n){
    int maxSum = 0;
    int runningSum = 0;
    for(int i = 0; i < n; i++){
        runningSum+=nums[i];
        if(runningSum<0){
            runningSum=0;
        }
        maxSum=max(maxSum,runningSum);
    }
    return maxSum;
}
int main(int argc, char** argv){
    int arr[] {-2, 3, 4, -1, 5, -12, 6, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    cout << "Max Sum: "<<kadane(arr, n)<<"\n";
}
