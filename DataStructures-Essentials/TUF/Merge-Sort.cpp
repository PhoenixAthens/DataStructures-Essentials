#include <vector>
#include <iostream>
using std::vector;
using std::cout;

template <class T>
void merge(vector<T>& arr, int low, int mid, int high){
    int start = low, end = high, mid_copy = mid+1;
    vector<T> temp;
    while(start <= mid and mid_copy <=high){
        if(arr[start]<=arr[mid_copy]){
            temp.push_back(arr[start++]);
        }else{
            temp.push_back(arr[mid_copy++]);
        }
    }
    while(start <= mid)temp.push_back(arr[start++]);
    while(mid_copy<=high)temp.push_back(arr[mid_copy++]);
    auto it = temp.begin();
    for(int i=low;i<=high;i++){
        arr[i]=*(it);
        it++;
    }
}

//something wrong with the logic below!
template <class T>
void mergeSort(vector<T>& arr, int low, int high){
    if(low == high)return;
    int mid = low + (high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr, low, mid, high);
}

int main(int argc, char** argv){
    vector<int> vec {3,1,2,4,1,5,2,6,4};
    //               0 1 2 3 4 5 6 7 8
    mergeSort(vec,0,vec.size()-1);
    for(int i: vec){
        cout << i << " ";
    }
    cout << "\n";
}
