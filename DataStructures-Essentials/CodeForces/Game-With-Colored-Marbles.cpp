#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            arr[temp-1]++;
        }
        int alice{0};
        bool flag = true;
        for(int i: arr){
            if(i!=0){
                if(flag){
                    if(i==1){
                        alice+=2;
                        flag=false;
                    }else{
                        if(i%2==0){
                            alice++;
                        }else{
                            alice++;
                            flag=false;
                        }
                    }
                }else{
                    if(i==1){
                        flag=true;
                    }
                    else{
                        if(i%2==0){
                            alice++;
                        }else{
                            alice++;
                            flag=true;
                        }
                    }
                }
            }
        }
        cout << alice << "\n";
    }
}
