#include <iostream>
using std::cout;
using std::cin;
int main(){
    int ans {0};
    for(int i=0;i<5;i++){
        bool found = false;
        for(int j=0;j<5;j++){
            int temp;
            cin >> temp;
            if(temp==1){
                ans+=abs(2-i)+abs(2-j);
                found=true;
                break;
            }
        }
        if(found)break;
    }
    cout << ans << "\n";
}
