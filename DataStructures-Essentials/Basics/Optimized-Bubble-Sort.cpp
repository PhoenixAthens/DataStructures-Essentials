#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::swap;
using std::vector;
vector<int> optimizedBubbleSort(vector<int> v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        bool swapD=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swapD=true;
                swap(v[j],v[j+1]);
            }
        }
        if(!swapD)break;
    }
    return v;
}
