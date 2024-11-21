#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n,k;
    cin >> n >> k;
    bool all_z=false;
    int num{0};
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            break;
        }
        if(arr[i]>=arr[k-1])num++;
    }
    cout << num << "\n";
}
