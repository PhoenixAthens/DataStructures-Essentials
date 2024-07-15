#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios_base;
int main(int argc, char** argv){
    //taking input dimensions for the array;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int rows, columns;
    cin >> rows >> columns;
    int arr[rows][columns];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin >> arr[i][j];
            //we can give input in one line the entire quad-loop like so
            //1 2 3 4 5 6
            //this will create the array as printed below
        }
    }
    //printing 2D array row-wise
    for(int i=0;i<rows;i++){
        for(int j = 0; j < columns; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//    1 2 3
//    4 5 6
    
    //printing 2D array column-wise
    for(int i = 0; i < columns; i ++){
        for(int j = 0;j<rows;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
//    1 4
//    2 5
//    3 6
    
}
