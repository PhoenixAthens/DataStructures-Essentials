#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::array;
using std::swap;
int main(){
    array<int,3> arr;
    cin >> arr[0] >> arr[1] >> arr[2];
    int n=2;
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
        n--;
    }
    int i=0;
    int sum;
    if(arr[0]==1){
        sum=0;
        while(i<3 && arr[i]==1){
            sum+=arr[i];
            i++;
        }
        if(i<3 && sum==1){
            sum+=arr[i];
            i++;
        }
    }
    else sum=1;
    
    while(i<3){sum*=arr[i];i++;}
    cout << sum << "\n";
}
