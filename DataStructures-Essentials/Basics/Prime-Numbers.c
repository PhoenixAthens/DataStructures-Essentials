#include <stdio.h>
#include <math.h>
int checkIfPrime(int val){
    if(val==1)return 0;
    else{
        int sq = (int)sqrt(val);
        for(int i=2;i<=sq;i++){
            if(val%i==0)return 0;
        }
    }
    return 1;
}
int primes(int* arr, int size, int val){
    int sq = (int)sqrt(val);
    for(int i=0;i<size && *(arr+i)<=sq;i++){
        if(val%*(arr+i)==0)return 0;
    }
    return 1;
    
}
int main(){
    int arr[50] = {0};
    int index=0;
    for(int i=3;i<=100;i++){
        if(checkIfPrime(i)){
            arr[index++]=i;
        }
    }
    for(int i=0;i<index;i++){
        printf("%d\n",arr[i]);
    }
    
    int arr2[50] = {2};
    int size=1;
    for(int i=3;i<=100;i++){
        if(primes(arr2,size,i)){
            arr2[size++]=i;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    printf("%d %d",size,index);
    return 0;
}
