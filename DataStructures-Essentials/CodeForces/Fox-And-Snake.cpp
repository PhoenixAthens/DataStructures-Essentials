#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n,m;
    cin >> n >> m;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int i=0;i<m;i++)cout<<"#";
            cout<<"\n";
        }else{
            if(flag){
                for(int i=0;i<m-1;i++)cout<<".";
                cout<<"#\n";
                flag=false;
            }else{
                cout<<"#";
                for(int i=1;i<m;i++)cout<<".";
                cout<<"\n";
                flag=true;
                
            }
        }
    }
}
