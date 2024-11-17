#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int cnt{0};
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            if(temp>=x)cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
