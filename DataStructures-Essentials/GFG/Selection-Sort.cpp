//{ Driver Code Starts
#include <stdio.h>
#include <iostream>

using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int size;
    int select(int arr[], int i)
    {
        int min = i;
        for(int startFrom = i+1;startFrom<size;startFrom++){
            if(arr[startFrom]<arr[min]){
                min = startFrom;
            }
        }
        return min;
    }
     
    void selectionSort(int arr[], int n)
    {
        size = n;
        for(int i=0;i<n-1;i++){
            int min = select(arr,i);
            swap(arr[i],arr[min]);
        }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends
