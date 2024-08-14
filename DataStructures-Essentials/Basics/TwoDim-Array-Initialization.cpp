#include <iostream>
using std::cout;
using std::cin;

//it is manadatory to provide number of columns in a 2-D array
void printArray(int rows, int columns, int arr[][4]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void printArray_2(int** arr, int rows, int columns){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<*(*(arr+i)+j)<<" ";
        }
        cout<<"\n";
    }
}
void printArray_3(int* arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << *(arr + i * columns + j) << " ";
        }
        cout << "\n";
    }
}


int main(int argc, char** argv){
    int a1[][3] = {{0,1,2}};
    for(auto i: a1){
        //here i is a int*, thus its size is 8bytes, thus the expression "sizeof(i)/sizeof(int)" gives us 2 rather than 3
        //beacuse i is a pointer, we can't run for-each loop on it!
        for(int j=0;j<3;j++){
            cout<<(*i+j)<<" ";
        }
        cout<<"\n";
    }
    int a2[3][4] = {{1,2,3,4},{1,2},{1}};
    printArray(3,4,a2);
//    1 2 3 4
//    1 2 0 0
//    1 0 0 0
    //printArray_2(reinterpret_cast<int**>(a2), 3, 4);
    printArray_3(*a2, 3, 4);
}
