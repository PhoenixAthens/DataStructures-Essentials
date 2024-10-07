#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::swap;
void selectionSort(vector<int>& vec){
    int n = vec.size();
    for(int i=0;i<n-1;i++){
        int minIndex = i ;
        for(int j=i+1;j<n;j++){
            if(vec[j]<vec[minIndex]){
                minIndex=j;
            }
        }
        swap(vec[i],vec[minIndex]);
    }
}
int main(int argc, char** argv){
    vector<int> v {10,8,2,3,1,4};
    selectionSort(v);
    for(int i: v){
        cout << i << " ";
    }
    cout << "\n";
}
