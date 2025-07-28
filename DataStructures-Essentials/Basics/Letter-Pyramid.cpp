#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;
    for(int i{0}; i<input.length(); i++){
        for(int j=1;j<input.length()-i;j++){
            cout << " ";
        }
        int j{0};
        for(;j<=i;j++){
            cout << input[j];
        }
        j-=2;
        for(;j>=0;j--){
            cout << input[j];
        }
        cout<<"\n";
    }
}
