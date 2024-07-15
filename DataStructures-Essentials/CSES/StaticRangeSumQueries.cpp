#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char** argv){
    int n,q;
    cin>>n >> q;
    long arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    long prefSum[n+1];
    prefSum[0] = 0;
    for(int i=0;i<n;i++){
        prefSum[i+1]=prefSum[i]+arr[i];
    }
    for(int i=0;i<q;i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        cout<<prefSum[b+1]-prefSum[a]<<"\n";
    }
}
