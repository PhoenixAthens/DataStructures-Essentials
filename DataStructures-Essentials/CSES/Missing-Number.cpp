#include <iostream>
using std::cout;
using std::cin;
int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int counter[n];
    for(int i = 0;i<n-1;i++){
        int index;
        cin >> index;
        counter[index-1]=1;
    }
    for(int i = 0;i<n;i++){
        if(counter[i]!=1){
            cout << i+1 << "\n";
            return 0;
        }
    }
}
