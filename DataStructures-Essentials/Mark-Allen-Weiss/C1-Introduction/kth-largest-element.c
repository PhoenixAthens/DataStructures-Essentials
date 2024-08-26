#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int kth_largest(int* arr, int size, int k);
int kth_largest_2(int* arr, int size, int k);
int main(int argc, char** argv){
    int arr[] = {34,68,11,92,82,40,1,4,96,53,15,47,10,45,75,50,63,80,12,35};
    int arr2[] = {34,68,11,92,82,40,1,4,96,53,15,47,10,45,75,50,63,80,12,35};
    
    printf("7th largest element: %d\n",kth_largest(arr, 20, 7));
    printf("7th largest element: %d\n",kth_largest_2(arr2, 20, 7));
    for(int i=0;i<20;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
    for(int i=0;i<20;i++){
        printf("%d ",*(arr2+i));
    }
    printf("\n");
    return 0;
}
int kth_largest(int* arr, int size, int k){
    if(k>size){
        return INT_MIN;
    }
    for(int i=size;i>0;i--){
        for(int j=0;j<i-1;j++){
            if(*(arr+j) > *(arr+j+1)){
                *(arr+j)=*(arr+j)^*(arr+j+1);
                *(arr+j+1)=*(arr+j)^*(arr+j+1);
                *(arr+j)=*(arr+j)^*(arr+j+1);
            }
        }
    }
    return *(arr+size-k);
}
int kth_largest_2(int* arr, int size, int k){
    if(k>size){
        return INT_MIN;
    }
    int* subArr = (int*)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++){
        *(subArr+i)=*(arr+i);
    }
    
    for(int i=k;i>0;i--){
        for(int j=0;j<i-1;j++){
            if(*(subArr+j) > *(subArr+j+1)){
                *(subArr+j)=*(subArr+j)^*(subArr+j+1);
                *(subArr+j+1)=*(subArr+j)^*(subArr+j+1);
                *(subArr+j)=*(subArr+j)^*(subArr+j+1);
            }
        }
    }
    for(int i=k;i<size;i++){
        if(*(arr+i)>*(subArr)){
            int j=0;
            while(*(arr+i)>*(subArr+j) && j<k){
                j++;
            }
            for(int i=0;i<j-1;i++){
                *(subArr+i)=*(subArr+i+1);
            }
            *(subArr+j-1)=*(arr+i);
        }
    } 
    int val = *(subArr);
    free(subArr);
    return val;
}
