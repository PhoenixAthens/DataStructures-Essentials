#include <vector>
#include <iostream>
using std::cout;
using std::cin;
using std::vector;
int countDigits(int n){
    vector<int> vec;
    int n_copy = n;
    while(n_copy!=0){
        vec.push_back(n_copy%10);
        n_copy/=10;
    }
    int count{0};
    for(int i: vec)
        if(i!=0 && n%i==0)count++;
    
    return count;
}
int main(int argc, char** argv){
    int n;
    while(true){
        cin >> n;
        cout << (int)(log10(n)+1) << "\n";
    }
    cout << "\n";
    return 0;
}
