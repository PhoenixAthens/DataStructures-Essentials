#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::swap;

void rev(int start, int end, vector<int>& v){
    if(start<end){
        swap(v[start],v[end]);
        rev(start+1,end-1,v);
    }
}

void reverseArray(vector<int>& arr){
    rev(0,arr.size()-1,arr);
}

int main(int argc, char** argv){
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{1,4,9,20,11};
    
    reverseArray(v1);
    reverseArray(v2);
    
    for(int i=0;i<5;i++){
        cout << v1[i] << " ";
    }
    cout << "\n";
    
    for(int i=0;i<5;i++){
        cout << v2[i] << " ";
    }
    cout << "\n";
    return 0;
}
