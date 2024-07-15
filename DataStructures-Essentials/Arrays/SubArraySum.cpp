#include <iostream>
#include <format>
using std::format;
using std::cout;
using std::endl;
int maxSubArraySum(int* arr, int size, int*);
int maxSubArraySum_prefixSum(int* arr, int size);
int maxSumArraySum_prefixSum_improved(int* arr, int size);
int main(int argc, char** argv){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sumArray[55]{0};
    cout<<format("Max-Sum: {}\n",maxSubArraySum(arr, sizeof(arr)/sizeof(int), sumArray));
    for(auto& a: sumArray){
        cout<<format("{}, ",a);
    }
    cout<<endl;
    
    int arr2[] = {-2,3,4,-1,5,-12,6,1,3};
    int sumArray2[45]{0};
    cout<<format("Max-Sum: {}\n",maxSubArraySum(arr2, sizeof(arr2)/sizeof(int), sumArray2));
    for(auto& a: sumArray2){
        cout<<format("{}, ",a);
    }
    cout<<endl;
    cout<<format("Max-Sum: {}\n",maxSubArraySum_prefixSum(arr, sizeof(arr)/sizeof(int)));
    cout<<endl;
    cout<<format("Max-Sum: {}\n",maxSubArraySum_prefixSum(arr2, sizeof(arr2)/sizeof(int)));
    cout<<endl;
    cout<<format("Max-Sum: {}\n",maxSumArraySum_prefixSum_improved(arr, sizeof(arr)/sizeof(int)));
    cout<<endl;
    cout<<format("Max-Sum: {}\n",maxSumArraySum_prefixSum_improved(arr2, sizeof(arr2)/sizeof(int)));
    cout<<endl;
}
int maxSubArraySum(int* arr, int size, int* sumArray){
    int maxSum = *(arr);
    int index = 0;
    for(int i = 0; i < size; i++){
        int sum = 0;
        for(int j = i; j < size; j++){
            sum += *(arr+j);
            sumArray[index++]=sum; //fix this
            if(sum > maxSum) maxSum = sum;
        }
    }
    return maxSum;
}
int maxSubArraySum_prefixSum(int* arr, int size){
    int arr2[size];
    arr2[0] = *(arr);
    int maxSum = arr[0];
    for(int i=1; i<size; i++){
        arr2[i] = arr2[i-1] + *(arr+i);
        if(arr2[i]>maxSum)maxSum=arr2[i];
    }
    
    for(int i = 1; i<size;i++){
        for(int j=i;j<size;j++){
            int preSum = arr2[j]-arr2[i-1];
            if(maxSum < preSum)maxSum=preSum;
        }
    }
    return maxSum;
}
int maxSumArraySum_prefixSum_improved(int* arr, int size){
    int prefSum[size+1];
    prefSum[0]=0;
    int i = 1;
    for(int a = 0; a < size; a++){
        prefSum[i] = prefSum[i-1] + *(arr+a);
        i++;
    }
    int maxSum = 0;
    for(i = 0; i < size; i++){
        for(int j = i; j< size; j++){
            int tempSum = prefSum[j+1] - prefSum[i];
            if(tempSum>maxSum)maxSum=tempSum;
        }
    }
    return maxSum;
}
