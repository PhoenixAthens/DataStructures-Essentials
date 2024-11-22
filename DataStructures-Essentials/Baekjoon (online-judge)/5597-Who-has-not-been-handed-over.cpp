#include <iostream>
using std::cout;
using std::cin;
int main(){
    int studs[30]{0};
    for(int i=0;i<28;i++){
        int temp;
        cin >> temp;
        studs[temp-1]=1;
    }
    for(int i=0;i<30;i++){
        if(studs[i]!=1)cout<<i+1<<" ";
    }
    cout<<"\n";
}
