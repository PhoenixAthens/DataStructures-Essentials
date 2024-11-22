#include <iostream>
using std::cout;
using std::cin;
using std::swap;

int main(){
    int m,n;
    cin >> m >> n;
    int arr[m];
    for(int i=1;i<=m;i++){
        arr[i-1]=i;
    }
    while(n--){
        int a,b;
        cin >> a >> b;
        a-=1;
        b-=1;
        while(a<=b){
            swap(arr[a],arr[b]);
            a++;
            b--;
        }
    }
    for(int i=0;i<m;i++)cout<<arr[i]<<" ";
    cout<<"\n";
}
