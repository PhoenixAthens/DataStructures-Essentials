#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::unordered_set;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool flag = false;
        unordered_set<int> u_set;
        int desired = n-2;
        int rows;
        int columns;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            if(flag==false){
                if(desired%temp==0){
                    if(u_set.find(desired/temp)!=u_set.end()){
                        rows = temp;
                        columns = desired/temp;
                        flag = true;
                    }else{
                        u_set.insert(temp);
                    }
                }
            }
        }
        cout << rows << " " << columns << "\n";
    }
}

