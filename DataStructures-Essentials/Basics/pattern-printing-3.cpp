#include <iostream>
using std::cout;
using std::cin;
void printPyramidLeftHalf(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n; j>i;j--){
            cout << "  ";
        }
        for(int j = i;j>0;j--){
            cout << j << " ";
        }
        cout << "\n";
    }
}
void printPyramidLeftHalf_2(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > (i+1); j--){
            cout << "  ";
        }
        for(int j = 0; j<=i; j++){
            cout << (char)('A'+i)<<" ";
        }
        cout << "\n";
    }
}
void printPyramidLeftHalf_3(int n){
    for(int i = 1; i<= n; i++){
        for(int j = n;j>i;j--){
            cout << "  ";
        }
        for(int j = 0;j<i;j++){
            cout << 5 - j << " ";
        }
        cout << "\n";
    }
}

void printPyramidLeftHalf_4(int n){
    for(int i = 1; i<= n; i++){
        for(int j = n;j>i;j--){
            cout << "  ";
        }
        for(int j = 0;j<i;j++){
            cout << (char)('E' - j) << " ";
        }
        cout << "\n";
    }
}


int main(int argc, char** argv){
    int n;
    cin >> n;
    printPyramidLeftHalf(n);
    cout << "\n";
    printPyramidLeftHalf_2(n);
    cout << "\n";
    printPyramidLeftHalf_3(n);
    cout<<"\n";
    printPyramidLeftHalf_4(n);
    return 0;
}
