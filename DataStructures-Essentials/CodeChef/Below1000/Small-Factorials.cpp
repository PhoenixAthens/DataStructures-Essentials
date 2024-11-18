#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        vector<int> vec;
        vec.push_back(1);
        while(n>1){
            int carry = 0;
            for(int i=0;i<vec.size();i++){
                int prod = (vec[i]*n)+carry;
                vec[i]=prod%10;
                carry = prod/10;
            }
            while(carry!=0){
                vec.push_back(carry%10);
                carry/=10;
            }
            n--;
        }
        for(int i=vec.size()-1;i>=0;i--){
            cout << vec[i];
        }
        cout << "\n";
    }
    return 0;
}
