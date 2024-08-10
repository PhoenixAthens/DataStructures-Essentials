#include <iostream>
using std::cout;
int isSquare(int x);
int main(int argc, char** argv){
    cout << isSquare(25) << "\n";
    cout << isSquare(20) << "\n";
    cout << isSquare(16) << "\n";
    cout << isSquare(8) << "\n";
    
}

int isSquare(int x){
    int high = x;
    int low = 0;
    int mid;
    while(low <= high){
        mid = low + (high-low)/2;
        if(mid*mid == x){
            return mid;
        }else if(mid*mid < x){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
    
}
