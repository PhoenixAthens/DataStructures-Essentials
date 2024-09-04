#include <iostream>
#include <type_traits>
using std::is_const;
using std::cout;
int main(int argc, char** argv){
    cout << "checking if const int is const: "<<is_const<const int><<"\n";
    int a = 23;
    const int b = 46;
    cout << "Checking if a is const: "<<is_const<decltype(a)>::value <<"\n";
}
