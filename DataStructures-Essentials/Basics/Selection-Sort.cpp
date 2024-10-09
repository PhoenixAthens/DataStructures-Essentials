#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::swap;

//increasing order
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

//decreasing order
void selectionSort_2(vector<int>& vec){
    int n = vec.size();
    for(int i=0;i<n;i++){
        int maxElemIndex=i;
        for(int j = i+1;j<n;j++){
            if(vec[j]>vec[maxElemIndex]){
                maxElemIndex = j;
            }
        }
        swap(vec[maxElemIndex],vec[i]);
    }
}
//Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place
void selectionSort_3(vector<int>& vec){
    int n = vec.size();
    for(int i=n-1;i>0;i--){
        int maxElemIndex = i;
        for(int j=0;j<i;j++){
            if(vec[maxElemIndex]<vec[j]){
                maxElemIndex=j;
            }
        }
        swap(vec[maxElemIndex],vec[i]);
    }

}
template <class T>
void selectionSort_4(vector<T>& vec){
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

template <class T>
void selectionSort_5(vector<T>& vec){
    int n = vec.size();
    for(int i=0;i<n;i++){
        int maxElemIndex=i;
        for(int j = i+1;j<n;j++){
            if(vec[j]>vec[maxElemIndex]){
                maxElemIndex = j;
            }
        }
        swap(vec[maxElemIndex],vec[i]);
    }
}

template <class T>
void selectionSort_6(vector<T>& vec){
    int n = vec.size();
    for(int i=n-1;i>0;i--){
        int maxElemIndex = i;
        for(int j=0;j<i;j++){
            if(vec[maxElemIndex]<vec[j]){
                maxElemIndex=j;
            }
        }
        swap(vec[maxElemIndex],vec[i]);
    }
}


int main(int argc, char** argv){
    vector<int> v {10,8,2,3,1,4};
    selectionSort(v);
    for(int i: v){
        cout << i << " ";
    }
    cout << "\n"; //1 2 3 4 8 10
    
    vector<int> v2 {10,8,2,3,1,4};
    selectionSort_2(v2);
    for(int i: v2){
        cout << i << " ";
    }
    cout << "\n"; //10 8 4 3 2 1
    
    vector<int> v3 {10,8,2,3,1,4};
    selectionSort_3(v3);
    for(int i: v3){
        cout << i << " ";
    }
    cout << "\n"; //1 2 3 4 8 10
    
    vector<char> v4{'z','x','b','c','a','d'};
    selectionSort_4(v4);
    for(char i: v4){
        cout << i << " ";
    }
    cout << "\n"; //a b c d x z
    
    vector<char> v5{'z','x','b','c','a','d'};
    selectionSort_5(v5);
    for(char i: v5){
        cout << i << " ";
    }
    cout << "\n"; //z x d c b a
    
    vector<char> v6{'z','x','b','c','a','d'};
    selectionSort_6(v6);
    for(char i: v6){
        cout << i << " ";
    }
    cout << "\n"; //a b c d x z 
}
