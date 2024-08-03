#include <iostream>
using std::cout;
using std::cin;

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
}
