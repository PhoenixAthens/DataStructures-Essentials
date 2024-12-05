#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    if(n==1){
        cout << vec[0] << " " << 0 << "\n";
    }else{
        int sereja{0},dima{0};
        int left{0};
        int right{n-1};
        bool flag = true;
        while(left<=right){
            if(vec[left]>vec[right]){
                if(flag){
                    sereja+=vec[left];
                    left++;
                }else{
                    dima+=vec[left];
                    left++;
                }
            }else{
                if(flag){
                    sereja+=vec[right];
                    right--;
                }else{
                    dima+=vec[right];
                    right--;
                }
            }
            flag=!flag;
        }
        cout << sereja << " " << dima << "\n";
    }
}
