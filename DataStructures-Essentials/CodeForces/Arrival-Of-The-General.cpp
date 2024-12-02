#include <iostream>
#include <utility>
using std::cout;
using std::cin;
using std::swap;
using std::max;
using std::pair;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int temp;
    pair<int,int> maxE{INT_MIN,0},minE{INT_MAX,0};
    for(int i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp;
        if(temp>maxE.first)maxE={temp,i};
        if(temp<minE.first)minE={temp,i};
        else if(temp==minE.first && i>minE.second)minE.second=i;
    }
    int steps{0};
    if(arr[0]!=maxE.first){
        for(int i=maxE.second;i>=1;i--){
            if(arr[i]>arr[i-1]){
                swap(arr[i],arr[i-1]);
                steps++;
            }
        }
    }
    if(arr[n-1]!=minE.first){
        for(int i=minE.second;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                steps++;
                swap(arr[i],arr[i+1]);
            }
        }
    }
    cout << steps << "\n";
}
