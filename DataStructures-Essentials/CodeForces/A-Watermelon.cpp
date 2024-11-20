#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    if(n%2==0){
        int part1 = n/2;
        int part2 = n/2;
        while(part1%2!=0 && part2%2!=0){
            part1++;
            part2--;
        }
        if(part1==0 || part2==0)cout<<"NO\n";
        else{
            cout << "YES\n";
        }
    }else{
        cout<<"NO\n";
    }
    return 0;
}

